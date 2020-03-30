#include "Compilation.hpp"

Compilation::Compilation()
{

}


float Compilation::calculate_population_density() const {
	float land_area = locale().land_area();
	if( land_area < 0.2f ){
		return 0.0f;
	}
	return population_group().total().total() / land_area;
}
