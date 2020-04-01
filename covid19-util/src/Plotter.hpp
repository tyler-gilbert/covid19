#ifndef PLOTTER_HPP
#define PLOTTER_HPP

#include <sapi/var.hpp>
#include "Object.hpp"

#include "Locale.hpp"
#include "ChartJs.hpp"
#include "Covid19.hpp"
#include "Population.hpp"
#include "Compilation.hpp"

//methods to convert containers to charts
class Plotter : public Object {
public:
	Plotter();

	String create_population_histogram_by_age(
			const PopulationGroup & population_group
			);

	String create_population_pie_chart_by_sex(
			const Population & population
			);

	String create_covid19_history_plot(
			const Covid19List& covid19_list
			);

	String create_covid19_days_to_double(
			const Covid19List& covid19_list
			);

	String create_covid19_daily_increase(
			const Covid19List& covid19_list
			);

	String create_growth_trend_latitude_population_density_bubble_plot(
			const CompilationGroup& compilation_group
			);

};

#endif // PLOTTER_HPP
