#include "ChartJs.hpp"

ChartJs::ChartJs()
{

}


var::String ChartJs::convert_type_to_string(enum type value){
	switch(value){
		case type_line: return "line";
		case type_bar: return "bar";
		case type_doughnut: return "doughnut";
		case type_pie: return "pie";
		case type_radar: return "radar";
	}
	return "line";
}
