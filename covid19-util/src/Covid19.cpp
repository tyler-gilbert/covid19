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

float Covid19List::calculate_daily_percent_increase(
		Covid19::metric_type value,
		u32 offset
		) const {
	if( offset == 0 ){
		return 0.0f;
	}

	float result =
			(m_data.at(offset).metric(value)*1.0f - m_data.at(offset-1).metric(value))
			/ m_data.at(offset-1).metric(value);

	if ( result < 0.0f ){
		result = 0.0001f;
	}
	return result;
}


Vector<Covid19Feature> Covid19List::calculate_daily_percent_increase(
		float maximum
		) const {
	Vector<Covid19Feature> result;
	Array<float, 3> entry;

	result.reserve(m_data.count());
	result.push_back(Covid19Feature());

	for(u32 i=1; i < m_data.count(); i++){

		entry.at(0) = calculate_daily_percent_increase(
					Covid19::metric_type_confirmed,
					i
					);

		entry.at(1) = calculate_daily_percent_increase(
					Covid19::metric_type_deaths,
					i
					);

		entry.at(2) = calculate_daily_percent_increase(
					Covid19::metric_type_recovered,
					i
					);

		for(auto & value: entry){
			if( value > maximum ){
				value = maximum;
			}
		}

		result.push_back(Covid19Feature("maximum")
										 .set_confirmed(entry.at(0))
										 .set_deaths(entry.at(1))
										 .set_recovered(entry.at(2))
										 );
	}
	return result;
}

Vector<Covid19Feature> Covid19List::calculate_increment_period(
		float factor,
		float maximum_daily_increase
		) const {
	Vector<Covid19Feature> result;
	Vector<Covid19Feature> daily_increase =
			calculate_daily_percent_increase(maximum_daily_increase);

	Covid19Feature entry;
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

Covid19Feature Covid19FeatureGroup::calculate_days_for_10x_growth(
		const Covid19List & covid19,
		u32 initial_value
		){

	auto calculate = [](
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
			return (stop_sample.timestamp_time() - start_sample.timestamp_time()).day();
		}

		return 0.0f;
	};

	return Covid19Feature(String::number(initial_value))
			.set_confirmed(calculate(covid19,initial_value, Covid19::metric_type_confirmed))
			.set_deaths(calculate(covid19,initial_value, Covid19::metric_type_deaths))
			.set_recovered(calculate(covid19,initial_value, Covid19::metric_type_recovered));
}

Covid19Feature Covid19FeatureGroup::calculate_latest_average_growth_rate(
		const Vector<Covid19Feature>& growth_rate,
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

			return Covid19Feature(String::number(day_count))
					.set_confirmed(calculate(day_count, Covid19::metric_type_confirmed))
					.set_deaths(calculate(day_count, Covid19::metric_type_deaths))
					.set_recovered(calculate(day_count, Covid19::metric_type_recovered));
}

Covid19Feature Covid19FeatureGroup::calculate_latest_growth_trend(
		const Vector<Covid19Feature>& growth_rate,
		u32 day_count
		){

	auto calculate = [&growth_rate](
			u32 count,
			enum Covid19::metric_type type
					) -> float {
				if( growth_rate.count() < 2 ){
					return 0.0f;
				}

				const Covid19Feature& last = growth_rate.back();
				int trend_offset = growth_rate.count() - 1 - count;
				if( trend_offset < 0 ){
					trend_offset = 0;
				}
				u32 total_count = growth_rate.count() - 1 - trend_offset;
				const Covid19Feature& first = growth_rate.at(trend_offset);
				return (last.at(type) - first.at(type))*1.0f / total_count;
			};

			return Covid19Feature(String::number(day_count))
					.set_confirmed(calculate(day_count, Covid19::metric_type_confirmed))
					.set_deaths(calculate(day_count, Covid19::metric_type_deaths))
					.set_recovered(calculate(day_count, Covid19::metric_type_recovered));
}

