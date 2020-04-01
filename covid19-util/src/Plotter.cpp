#include "Plotter.hpp"
#include "ChartJs.hpp"

Plotter::Plotter()
{

}


String Plotter::create_population_histogram_by_age(
		const PopulationGroup & population_group
		){

	ChartJs chart;
	chart.set_type(ChartJs::type_bar);

	ChartJsDataSet data_set;
	data_set.set_property("label", JsonString("Age Bracket"));

	for(u32 i=0; i < population_group.by_age_count(); i++){
		const Population & by_age = population_group.by_age(i);
		String label;
		if( by_age.maximum_age() == Population::absolute_maximum_age() ){
			label.format("%d and over", by_age.minimum_age());
		} else {
			label.format(
						"%d to %d",
						by_age.minimum_age(),
						by_age.maximum_age()
						);
		}

		chart.data().labels().push_back(label);
		data_set.data().push_back(
					String::number(by_age.total())
					);
	}

	chart.data().append(data_set);
	return JsonDocument().stringify(chart.to_object());
}

String Plotter::create_population_pie_chart_by_sex(
		const Population & population
		){
	ChartJs chart;
	chart.set_type(ChartJs::type_pie);

	ChartJsDataSet data_set;
	data_set.set_property("label", JsonString("Gender Share"));

	StringList colors;
	colors.push_back(ChartJsColor::create_blue().to_string())
			.push_back(ChartJsColor::create_red().to_string());


	chart.data().labels()
			.push_back("male")
			.push_back("female");

	chart.data().append(
				ChartJsDataSet()
				.append(String::number(population.male() * 100.0f / population.total(), "%0.2f"))
				.append(String::number(population.female() *100.0f / population.total(), "%0.2f"))
				.set_property("backgroundColor", JsonArray(colors))
				);

	chart.data().append(data_set);
	return JsonDocument().stringify(chart.to_object());
}


String Plotter::create_covid19_history_plot(
		const Covid19List& covid19_list
		){

	ChartJs chart;
	chart.set_type(ChartJs::type_line);

	ChartJsDataSet confirmed_data_set;
	ChartJsDataSet deaths_data_set;

	confirmed_data_set.set_type(ChartJsDataSet::type_real);
	confirmed_data_set.set_property("label", JsonString("Confirmed"));
	confirmed_data_set.set_property(
				"backgroundColor",
				JsonString( ChartJsColor::create_transparent().to_string() )
				);
	confirmed_data_set.set_property(
				"borderColor",
				JsonString( ChartJsColor::create_blue().to_string() )
				);

	deaths_data_set.set_type(ChartJsDataSet::type_real);
	deaths_data_set.set_property("label", JsonString("Deaths"));
	deaths_data_set.set_property(
				"backgroundColor",
				JsonString( ChartJsColor::create_transparent().to_string() )
				);

	deaths_data_set.set_property(
				"borderColor",
				JsonString( ChartJsColor::create_black().to_string() )
				);

	for(const auto & covid19: covid19_list.data()){
		chart.data().labels().push_back(
					covid19.timestamp().split(" ").at(0)
					);


		confirmed_data_set.data().push_back(
					String::number(covid19.confirmed())
					);

		deaths_data_set.data().push_back(
					String::number(covid19.deaths())
					);
	}

	JsonObject x_axis_object = ChartJsOptions::create_axis("time");
	x_axis_object.insert("distribution", JsonString("linear"));

	chart.options()
			//.set_x_axis(x_axis_object)
			.set_y_axis(
				ChartJsOptions::create_axis("logarithmic")
				)
			.set_property(
				"title",
				ChartJsOptions::create_title("COVID19 Cases (Log Scale)")
				);

	chart.data()
			.append(confirmed_data_set)
			.append(deaths_data_set);

	return JsonDocument().stringify(chart.to_object());
}

String Plotter::create_covid19_daily_increase(
		const Covid19List& covid19_list
		){
	ChartJs chart;
	chart.set_type(ChartJs::type_line);


	Vector<Array<float, 3>> daily_increase =
			covid19_list.calculate_daily_percent_increase(0.24f);

	Array<ChartJsDataSet, 3> data_sets;

	data_sets.at(0)
			.set_property("label", JsonString("Confirmed"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_blue().to_string()));

	data_sets.at(1)
			.set_property("label", JsonString("Deaths"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_black().to_string()));

	data_sets.at(2)
			.set_property("label", JsonString("Recovered"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_green().to_string()));

	String transparent_green =
			ChartJsColor::create_green()
			.set_alpha(64)
			.to_string();


	ChartJsDataSet decay_zone;
	decay_zone
			.set_property("label", JsonString("Decay Zone"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(transparent_green))
			.set_property("borderColor", JsonString(transparent_green));

	String transparent_red =
			ChartJsColor::create_red()
			.set_alpha(64)
			.to_string();

	ChartJsDataSet truncation_line;
	truncation_line
			.set_property("label", JsonString("Way Too High"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(transparent_red));


	for(u32 i=0; i < covid19_list.data().count(); i++){

		chart.data().labels().push_back(
					covid19_list.data().at(i).timestamp()
					);

		for(u32 j=0; j < data_sets.count(); j++){
				data_sets.at(j).data().push_back(
							String::number(daily_increase.at(i).at(j)*100.0f, "%0.2f")
							);
			}

		decay_zone.data().push_back(
					String("5.0")
					);

		truncation_line.data().push_back(
					String("24.0")
					);

	}

	chart.data().append(decay_zone);
	chart.data().append(truncation_line);
	chart.data().append(data_sets.at(0));
	chart.data().append(data_sets.at(1));

	JsonObject y_axis = ChartJsOptions::create_axis("linear");
	JsonObject ticks;
	ticks.insert("min", JsonInteger(0));
	ticks.insert("max", JsonInteger(25.0f));
	y_axis.insert("ticks", ticks);


	chart.options()
			.set_y_axis(y_axis)
			.set_property(
				"title",
				ChartJsOptions::create_title("Percent Daily Increase (Capped at 24%)")
				);

	return JsonDocument().stringify(chart.to_object());
}

String Plotter::create_covid19_days_to_double(
		const Covid19List& covid19_list
		){
	ChartJs chart;
	chart.set_type(ChartJs::type_line);

	ChartJsDataSet data_set;
	data_set.set_property("label", JsonString("Age Bracket"));

	Vector<Array<float, 3>> days_to_double =
			covid19_list.calculate_increment_period(2.0f, 5.0f);

	Array<ChartJsDataSet, 3> data_sets;

	data_sets.at(0)
			.set_property("label", JsonString("Confirmed"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_blue().to_string()));

	data_sets.at(1)
			.set_property("label", JsonString("Deaths"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_black().to_string()));

	data_sets.at(2)
			.set_property("label", JsonString("Recovered"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_green().to_string()));

	String transparent_red =
			ChartJsColor::create_red()
			.set_alpha(64)
			.to_string();

	ChartJsDataSet growth_zone;
	growth_zone
			.set_property("label", JsonString("Growth Zone"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(transparent_red))
			.set_property("borderColor", JsonString(transparent_red));

	String transparent_green =
			ChartJsColor::create_green()
			.set_alpha(64)
			.to_string();

	ChartJsDataSet truncation_line;
	truncation_line
			.set_property("label", JsonString("Truncation Line"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(transparent_green));


	for(u32 i=0; i < covid19_list.data().count(); i++){

		chart.data().labels().push_back(
					covid19_list.data().at(i).timestamp().split(" ").at(0)
					);

		for(u32 j=0; j < data_sets.count(); j++){
				if( days_to_double.at(i).at(j) > 24 ){
					data_sets.at(j).data().push_back("24");
				} else {
					data_sets.at(j).data().push_back(
								String::number(days_to_double.at(i).at(j), "%0.2f")
								);
				}


		}

		growth_zone.data().push_back(
					String("14.0")
					);

		truncation_line.data().push_back(
					String("24.0")
					);
	}

	chart.data().append(growth_zone);
	chart.data().append(truncation_line);
	chart.data().append(data_sets.at(0));
	chart.data().append(data_sets.at(1));

	JsonObject y_axis = ChartJsOptions::create_axis("linear");
	JsonObject ticks;
	ticks.insert("min", JsonInteger(0));
	ticks.insert("max", JsonInteger(25));
	y_axis.insert("ticks", ticks);

	chart.options()
			.set_y_axis(y_axis)
			.set_property(
				"title",
				ChartJsOptions::create_title("Days to Double (Capped at 24 Days)")
				);

	return JsonDocument().stringify(chart.to_object());
}
