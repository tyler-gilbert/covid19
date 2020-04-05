#include <sapi/chrono.hpp>

#include "Compilation.hpp"

Vector<Compilation>CompilationGroup::m_master_compilation_list;

Compilation::Compilation()
{

}


float Compilation::calculate_population_density() const {


	PRINTER_TRACE(
				printer(),
				String().format(
					"%f / %f -- for %s",
					total_population() * 1.0f,
					locale().land_area() * 1.0f,
					locale().description().cstring()
					)
			);

			if( locale().land_area() > 0.0f ){
		return total_population() * 1.0f / locale().land_area();
	}

	return 0.0f;
}

u32 Compilation::total_population() const {
	if( factbook().is_valid() ){
		return factbook().population();
	}

	return population_group().cummulative().total();
}

float Compilation::calculate_covid19_cummulative_per_population(
		enum Covid19::metric_type metric,
		float population_size
		) const {

	float total = total_population();
	if( total < 1.0f ){
		PRINTER_TRACE(
					printer(),
					"total population is zero for " +
					locale().description()
					);
		return 0.0f;
	}


	float result =
			covid19().cummulative(metric) * 1.0f /
			(total / population_size);

	PRINTER_TRACE(
				printer(),
				String().format(
					"cumm per pop is %d / (%f / %f) = %f -:- ",
					covid19().cummulative(metric),
					total,
					population_size,
					result
					) +
				locale().description()
				);

	return result;
}

CompilationGroup::CompilationGroup(const JsonObject & object) :
	m_parent(object.at("parent").to_object()){
	JsonArray children_array = object.at("children").to_array();
	m_children.reserve(children_array.count());
	for(u32 i=0; i < children_array.count(); i++){
		m_children.push_back(
					CompilationGroup(children_array.at(i).to_object())
					);
	}
}


CompilationGroup::CompilationGroup(const JsonArray & json_array){
	PrinterArray guard(printer(), "World");
	Vector<Compilation> compilation_array;
	compilation_array.reserve(json_array.count());
	for(u32 i=0; i < json_array.count(); i++){
		compilation_array.push_back(json_array.at(i).to_object());
	}

	Timer t;
	t.start();
	collect_children(compilation_array);
	printer().key("jsonArrayConstructTime", String::number(
									t.milliseconds(), "%dms"
									));
	t.restart();
	build_parent_from_children();
	printer().key("buildFromChildrenTime", String::number(
									t.milliseconds(), "%dms"
									));
}

CompilationGroup::CompilationGroup(
		const Compilation & parent,
		const Vector<Compilation>& compilation_array) :
	m_parent(parent){
	PrinterArray guard(printer(), parent.locale().description());
	Timer t;
	t.start();
	collect_children(compilation_array);
	printer().key("collectChildrenTime", String::number(
									t.microseconds(), "%dus"
									));
	build_parent_from_children();
	t.restart();
	printer().key("buildFromChildrenTime", String::number(
									t.microseconds(), "%dus"
									));
}

void CompilationGroup::collect_children(
		const Vector<Compilation>& compilation_array
		){

	m_children.reserve(4000);

	for(u32 i=0; i < compilation_array.count(); i++){

		const Compilation& compilation = compilation_array.at(i);

		if( parent().locale().country() == "null" ){
			//import the world -- all nations as children

			if( (compilation.locale().country() != "null") &&
					(compilation.locale().state() == "null") &&
					(compilation.locale().county() == "null")
					){

				m_children.push_back(
							CompilationGroup(compilation, compilation_array)
							);
			}

		} else if( state() == "null" ){
			//import the country -- all states as children
			if( (compilation.locale().country() == country() ) &&
					(compilation.locale().state() != "null") &&
					(compilation.locale().county() == "null")
					){

				m_children.push_back(
							CompilationGroup(compilation, compilation_array)
							);

			}
		} else if( parent().locale().county() == "null" ){
			//import the state -- all counties as children
			if( (compilation.locale().country() == country() ) &&
					(compilation.locale().state() == state() ) &&
					(compilation.locale().county() != "null" )
					){
				m_children.push_back(
							CompilationGroup(compilation, compilation_array)
							);
			}
		}
	}

	m_children.shrink_to_fit();
}

void CompilationGroup::build_parent_from_children(){
	for(const auto & child: m_children){
		parent() += child.parent();
	}
}

StringList CompilationGroup::children_name_list() const {
	StringList result;
	result.reserve(children().count());
	for(const auto & child: children()){
		if( child.parent().locale().is_country() ){
			result.push_back(child.parent().locale().country());
		} else if( child.parent().locale().is_state() ){
			result.push_back(child.parent().locale().state());
		} else {
			result.push_back(child.parent().locale().county());
		}
	}

	result.sort(StringList::ascending);

	return result;

}

Vector<Locale> CompilationGroup::children_locale_list() const {
	StringList name_list = children_name_list();
	Vector<Locale> result;
	result.reserve(children().count());
	for(const auto & name: name_list){
		for(const auto & child: children()){
			if( child.parent().locale().is_country() && child.parent().locale().country() == name){
				result.push_back(child.parent().locale());
			} else if( child.parent().locale().is_state() && child.parent().locale().state() == name){
				result.push_back(child.parent().locale());
			} else if( child.parent().locale().is_county() && child.parent().locale().county() == name ){
				result.push_back(child.parent().locale());
			}
		}
	}

	return result;
}
