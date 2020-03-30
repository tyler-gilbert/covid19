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

Vector<Array<float, 3>> Covid19List::calculate_daily_percent_increase() const {
	Vector<Array<float, 3>> result;
	Array<float, 3> entry;
	for(auto & value: entry){
		value = 0.0f;
	}
	result.push_back(entry);

	for(u32 i=1; i < m_data.count(); i++){


		if( m_data.at(i-1).confirmed() > 0 ){
			entry.at(0) =
					(m_data.at(i).confirmed()*1.0f - m_data.at(i-1).confirmed())
					/ m_data.at(i-1).confirmed();

		} else {
			entry.at(0) = 0.0f;
		}

		if( m_data.at(i-1).deaths() > 0 ){
			entry.at(1) =
					(m_data.at(i).deaths()*1.0f - m_data.at(i-1).deaths())
					/ m_data.at(i-1).deaths();
		} else {
			entry.at(1) = 0.0f;
		}

		if( m_data.at(i-1).recovered() > 0 ){
			entry.at(2) =
					(m_data.at(i).recovered()*1.0f - m_data.at(i-1).recovered())
					/ m_data.at(i-1).recovered();

		} else {
			entry.at(2) = 0.0f;
		}

		result.push_back(entry);
	}
	return result;
}

Vector<Array<float, 3>> Covid19List::calculate_increment_period(float factor) const {
	Vector<Array<float, 3>> result;
	Vector<Array<float, 3>> daily_increase = calculate_daily_percent_increase();

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
