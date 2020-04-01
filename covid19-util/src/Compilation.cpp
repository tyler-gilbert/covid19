#include "Compilation.hpp"

Compilation::Compilation()
{

}


float Compilation::calculate_population_density() const {
	float land_area = locale().land_area();
	if( land_area < 0.2f ){
		return 0.0f;
	}
	return population_group().cummulative().total() * 1.0f / land_area;
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
	collect_children(json_array);
	build_parent_from_children();
}

CompilationGroup::CompilationGroup(
		const Compilation & parent,
		const JsonArray& json_array) :
	m_parent(parent){
	PrinterArray guard(printer(), parent.locale().description());
	collect_children(json_array);
	build_parent_from_children();
}

void CompilationGroup::collect_children(
		const JsonArray & compilation_array
		){


	u32 children_count = 0;
	for(u32 i=0; i < compilation_array.count(); i++){

		Compilation compilation(compilation_array.at(i).to_object());
		if( parent().locale().country() == "null" ){
			//import the world -- all nations as children

			if( (compilation.locale().country() != "null") &&
					(compilation.locale().state() == "null") &&
					(compilation.locale().county() == "null")
					){
				children_count++;
			}

		} else if( state() == "null" ){
			//import the country -- all states as children
			if( (compilation.locale().country() == country() ) &&
					(compilation.locale().state() != "null") &&
					(compilation.locale().county() == "null")
					){
				children_count++;
			}
		} else if( parent().locale().county() == "null" ){
			//import the state -- all counties as children
			if( (compilation.locale().country() == country() ) &&
					(compilation.locale().state() == state() ) &&
					(compilation.locale().county() != "null" )
					){
				children_count++;
			}
		}
	}

	m_children.reserve(children_count);

	for(u32 i=0; i < compilation_array.count(); i++){

		Compilation compilation(compilation_array.at(i).to_object());
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
}

void CompilationGroup::build_parent_from_children(){
	for(const auto & child: m_children){
		parent() += child.parent();
	}
}

StringList CompilationGroup::children_name_list() const {
	StringList result;
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
