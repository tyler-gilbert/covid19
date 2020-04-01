#ifndef COMPILATION_HPP
#define COMPILATION_HPP

#include "Locale.hpp"
#include "Population.hpp"
#include "Covid19.hpp"

class Compilation : public Container {
public:
	Compilation();
	Compilation(
			const Locale& locale,
			const PopulationGroup& population_group,
			const Covid19List& covid19) :
		m_locale(locale),
		m_population_group(population_group),
		m_covid19(covid19)
	{}

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

	Compilation& operator += (const Compilation& a){
		m_population_group += a.population_group();
		m_locale += a.locale();
		m_covid19 += a.covid19();
		m_covid19.data().sort(Vector<Covid19>::ascending);
		return *this;
	}

	float calculate_population_density() const;

	JsonObject to_object() const {
		JsonObject result;
		result.insert("locale", locale().to_object());
		result.insert("population", population_group().to_object());
		result.insert("covid19", covid19().to_array());
		return result;
	}

private:
	Locale m_locale;
	PopulationGroup m_population_group;
	Covid19List m_covid19;

};

class CompilationGroup : public Container {
public:

	CompilationGroup(const JsonObject & object);
	CompilationGroup(const JsonArray & json_array);
	CompilationGroup(
			const Compilation & parent,
			const JsonArray & json_array
			);

	const String& country() const {
		return parent().locale().country();
	}

	const String& state() const {
		return parent().locale().state();
	}

	const String& county() const {
		return parent().locale().county();
	}

	StringList children_name_list() const;
	Vector<Locale> children_locale_list() const;

	Compilation& parent(){ return m_parent; }
	const Compilation& parent() const { return m_parent; }

	Vector<CompilationGroup>& children(){ return m_children; }
	const Vector<CompilationGroup>& children() const { return m_children; }

	JsonObject to_object() const {
		JsonObject result;
		result.insert("parent", parent().to_object());
		JsonArray children_array;
		for(const auto & child: children()){
			children_array.append(child.to_object());
		}
		result.insert("children", children_array);
		return result;
	}

	u32 compilation_count() const {
		u32 count = 1;
		for(const auto & compilation_group: children()){
			count += compilation_group.compilation_count();
		}
		return count;
	}

	static bool ascending_locales(
			const CompilationGroup & a,
			const CompilationGroup & b
			){
		return a.parent().locale().description() <
				b.parent().locale().description();
	}

	static bool ascending_deaths(
			const CompilationGroup & a,
			const CompilationGroup & b
			){
		return a.parent().covid19().cummulative(Covid19::metric_type_deaths) <
				b.parent().covid19().cummulative(Covid19::metric_type_deaths);
	}

	static bool descending_deaths(
			const CompilationGroup & a,
			const CompilationGroup & b
			){
		return b.parent().covid19().cummulative(Covid19::metric_type_deaths) <
				a.parent().covid19().cummulative(Covid19::metric_type_deaths);
	}

	static bool ascending_confirmed(
			const CompilationGroup & a,
			const CompilationGroup & b
			){
		return a.parent().covid19().cummulative(Covid19::metric_type_confirmed) <
				b.parent().covid19().cummulative(Covid19::metric_type_confirmed);
	}

	static bool descending_confirmed(
			const CompilationGroup & a,
			const CompilationGroup & b
			){
		return b.parent().covid19().cummulative(Covid19::metric_type_confirmed) <
				a.parent().covid19().cummulative(Covid19::metric_type_confirmed);
	}

	static bool ascending_recovered(
			const CompilationGroup & a,
			const CompilationGroup & b
			){
		return a.parent().covid19().cummulative(Covid19::metric_type_recovered) <
				b.parent().covid19().cummulative(Covid19::metric_type_recovered);
	}

	static bool descending_recovered(
			const CompilationGroup & a,
			const CompilationGroup & b
			){
		return b.parent().covid19().cummulative(Covid19::metric_type_recovered) <
				a.parent().covid19().cummulative(Covid19::metric_type_recovered);
	}

private:
	Compilation m_parent;
	Vector<CompilationGroup> m_children;

	void collect_children(
			const JsonArray& compilation_array
			);

	void build_parent_from_children();

};

#endif // COMPILATION_HPP
