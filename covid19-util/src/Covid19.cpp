#include <cmath>
#include "Covid19.hpp"



String Covid19::parse_date(
		const String & file_name
		){

	String result;
	StringList items = file_name.split("/ T-:");
	u32 year_offset = 2;
	u32 month_offset = 0;
	u32 day_offset = 1;


	u32 year = items.at(year_offset).to_integer();
	if( year < 2000 ){
		year += 2000;
	}

	result.format(
				"%04d-%02d-%02d",
				year,
				items.at(month_offset).to_integer(),
				items.at(day_offset).to_integer()
				);

	return result;
}

void Covid19List::sanitization_filter(){

	if( m_data_smoothed.count() > 2 ){
		//remove anomalies
		for(u32 i=m_data_smoothed.count()-1; i > 2; i--){
			Covid19Float& value_at = m_data_smoothed.at(i);
			Covid19Float& value_before = m_data_smoothed.at(i-1);
			for(u32 j=0; j < value_at.data().count(); j++){

				if( value_at.data().at(j) <
						value_before.data().at(j) ){

					value_before.data().at(j) = value_at.data().at(j);
				}
			}
		}

		constexpr u32 window_size = 3;
		//do a moving average log filter
		if( m_data_smoothed.count() > window_size ){
			for(int i=m_data_smoothed.count()-1; i > 1; i--){
				float count = 1.0f;
				Covid19Float sample = m_data_smoothed.at(i).log10f();
				for(int j = 1; j < window_size; j++){
					if( i - j > 0){
						sample += m_data_smoothed.at(i-j).log10f();
						count+=1.0f;
					}
				}
				sample = sample / count;
				m_data_smoothed.at(i) = sample.powf(10.0f);
			}
		}
	}
}

float Covid19List::calculate_daily_growth_rate(
		Covid19::metric_type value,
		u32 offset
		) const {
	if( offset == 0 ){
		return 0.0f;
	}

	if( m_data.at(offset-1).metric(value) == 0 ){
		return 0.0001f;
	}

	float result =
			(m_data.at(offset).metric(value)*1.0f - m_data.at(offset-1).metric(value))
			/ m_data.at(offset-1).metric(value);

	if ( result < 0.0f ){
		result = 0.0001f;
	}
	return result;
}


Vector<Covid19Float> Covid19List::calculate_daily_growth_rate(
		u32 window_size,
		float maximum
		) const {
	Vector<Covid19Float> result;
	Covid19Float entry;

	result.reserve(m_data_smoothed.count());
	result.push_back(Covid19Float());

	for(u32 i=1; i < m_data_smoothed.count(); i++){

		entry = (m_data_smoothed.at(i) - m_data_smoothed.at(i-1)) /
				m_data_smoothed.at(i-1);

		for(auto & value: entry.data()){
			if( value > maximum ){
				value = maximum;
			}
			if( isnan(value) ){
				value = 0.0f;
			}
		}

		result.push_back(Covid19Float()
										 .set_timestamp(m_data.at(i).timestamp_time())
										 .set_confirmed(entry.at(0))
										 .set_deaths(entry.at(1))
										 .set_recovered(entry.at(2))
										 );
	}

	if( result.count() > window_size ){
		for(u32 i=0; i < result.count()-1; i++){
			float count = 1.0f;
			for(u32 j = 1; j < window_size; j++){
				if( i < result.count() - j ){
					result.at(i) += result.at(i+j);
					count+=1.0f;
				}
			}
			result.at(i) /= count;
		}
	}

	return result;
}

Vector<Covid19Float> Covid19List::calculate_increment_period(
		float factor,
		float maximum_daily_increase
		) const {
	Vector<Covid19Float> result;
	Vector<Covid19Float> daily_increase =
			calculate_daily_growth_rate(1, maximum_daily_increase);

	Covid19Float entry;
	result.reserve(m_data.count());
	result.push_back(entry);

	for(u32 i=1; i < m_data.count(); i++){
		entry.set_confirmed(
					logf(factor) /
					logf(1.0f + daily_increase.at(i).confirmed()
							 ));

		entry.set_deaths(
					logf(factor) /
					logf(1.0f + daily_increase.at(i).deaths()
							 ));

		entry.set_recovered(
					logf(factor) /
					logf(1.0f + daily_increase.at(i).recovered()
							 ));


		result.push_back(entry);
	}

	return result;
}

Covid19Float Covid19FeatureGroup::calculate_days_for_10x_growth(
		const Covid19List & covid19,
		u32 initial_value
		){

	auto calculate = [this](
			const Covid19List & covid19,
			u32 value,
			enum Covid19::metric_type type
			) -> float {

		Covid19 start_sample;
		Covid19 stop_sample;
		for(const auto & sample: covid19.data()){
			if( !start_sample.is_valid() && (sample.metric(type) >= value) ){
				start_sample = sample;
			}

			if( !stop_sample.is_valid() && (sample.metric(type) >= value*10) ){
				stop_sample = sample;
			}
		}

		if( stop_sample.is_valid() ){
			u32 days = (stop_sample.timestamp_time() - start_sample.timestamp_time()).time() / (3600*24);

			float result = powf(10.0f, 1.0f / days) - 1;
			printer().debug("days = %d, growth = %0.2f", days, result);

			return result;
		}

		return 0.0f;
	};

	return Covid19Float()
			.set_confirmed(calculate(covid19,initial_value, Covid19::metric_type_confirmed))
			.set_deaths(calculate(covid19,initial_value, Covid19::metric_type_deaths))
			.set_recovered(calculate(covid19,initial_value, Covid19::metric_type_recovered));
}

Covid19Float Covid19FeatureGroup::calculate_latest_average_growth_rate(
		const Vector<Covid19Float>& growth_rate,
		u32 day_count
		){

	auto calculate = [&growth_rate](
			u32 count,
			enum Covid19::metric_type type
					) -> float {

				if( growth_rate.count() == 0 ){
					return 0.0f;
				}

				int average_offset = growth_rate.count() - 1 - count;
				if( average_offset < 0 ){
					average_offset = 0;
				}
				const u32 last_offset = growth_rate.count() - 1;
				const u32 total_count = last_offset - average_offset;

				if( total_count == 0 ){
					return 0.0f;
				}

				float sum = 0.0f;
				for(u32 i = average_offset; i < last_offset; i++){
					sum += growth_rate.at(i).at(type);
				}

				return sum / total_count;
			};

			return Covid19Float()
					.set_confirmed(calculate(day_count, Covid19::metric_type_confirmed))
					.set_deaths(calculate(day_count, Covid19::metric_type_deaths))
					.set_recovered(calculate(day_count, Covid19::metric_type_recovered));
}

Covid19Float Covid19FeatureGroup::calculate_latest_growth_trend(
		const Vector<Covid19Float>& growth_rate,
		u32 day_count
		){

	auto calculate = [&growth_rate](
			u32 count,
			enum Covid19::metric_type type
					) -> float {
				if( growth_rate.count() < 2 ){
					return 0.0f;
				}

				const Covid19Float& last = growth_rate.back();
				int trend_offset = growth_rate.count() - 1 - count;
				if( trend_offset < 0 ){
					trend_offset = 0;
				}
				u32 total_count = growth_rate.count() - 1 - trend_offset;
				const Covid19Float& first = growth_rate.at(trend_offset);
				return (last.at(type) - first.at(type))*1.0f / total_count;
			};

			return Covid19Float()
					.set_confirmed(calculate(day_count, Covid19::metric_type_confirmed))
					.set_deaths(calculate(day_count, Covid19::metric_type_deaths))
					.set_recovered(calculate(day_count, Covid19::metric_type_recovered));
}

