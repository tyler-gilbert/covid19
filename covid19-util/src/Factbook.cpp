#include "Factbook.hpp"

Factbook WorldFactbook::m_empty_factbook;

Factbook::Factbook(){}


float Factbook::calculate_population_density() const {
	String population_string = find_value(
				"Population"
				);
	String geography_area_string = find_value(
				"Area"
				);

	u32 area = geography_area_string.to_integer();

	if( area > 0 ){
		return population_string.to_float() / area;
	}

	return 0.0f;
}
