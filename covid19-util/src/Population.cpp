#include "Population.hpp"

Population::Population(){}

float PopulationGroup::calculate_average_age() const {

	float sum = 0.0f;
	u32 count = 0;

	for(const auto & population: m_by_age_list){
		sum += (1.0f* population.total() *
						(population.minimum_age() + population.maximum_age())/2.0f
						);
		count += population.total();
	}

	if( count == 0 ){
		return 0.0f;
	}
	return sum / count;
}
