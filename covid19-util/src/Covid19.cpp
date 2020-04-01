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


Vector<Array<float, 3>> Covid19List::calculate_daily_percent_increase(
		float maximum
		) const {
	Vector<Array<float, 3>> result;
	Array<float, 3> entry;
	for(auto & value: entry){
		value = 0.0f;
	}
	result.push_back(entry);

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

		result.push_back(entry);
	}
	return result;
}

Vector<Array<float, 3>> Covid19List::calculate_increment_period(
		float factor,
		float maximum_daily_increase
		) const {
	Vector<Array<float, 3>> result;
	Vector<Array<float, 3>> daily_increase =
			calculate_daily_percent_increase(maximum_daily_increase);

	Array<float, 3> entry;
	for(auto & value: entry){
		value = 0.0f;
	}
	result.push_back(entry);

	for(u32 i=1; i < m_data.count(); i++){
		for(u32 j=0; j < entry.count(); j++){
			entry.at(j) =
					logf(factor) /
					logf(1.0f + daily_increase.at(i).at(j)
							 );
		}
		result.push_back(entry);
	}

	return result;
}
