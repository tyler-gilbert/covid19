#ifndef COMPILATION_HPP
#define COMPILATION_HPP

#include "Locale.hpp"
#include "Population.hpp"
#include "Covid19.hpp"

class Compilation : public Container {
public:
	Compilation();
	Compilation(const JsonObject & object) :
		m_population_group(object.at("population").to_object()),
		m_locale(object.at("locale").to_object()),
		m_covid19(object.at("covid19").to_array()){
	}

	const PopulationGroup & population_group() const {
		return m_population_group;
	}

	const Locale & locale() const {
		return m_locale;
	}

	const Covid19List & covid19() const {
		return m_covid19;
	}


	static Vector<Compilation> load(const JsonArray & array){
		Vector<Compilation> result;
		for(u32 i=0; i < array.count(); i++){
			result.push_back(
						Compilation(array.at(i).to_object())
						);
		}
		return result;
	}

	float calculate_population_density() const;

private:
	PopulationGroup m_population_group;
	Locale m_locale;
	Covid19List m_covid19;

};

#endif // COMPILATION_HPP
