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
				JsonString( ChartJsColor::create_red().to_string() )
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

String Plotter::create_covid19_days_to_double(
		const Covid19List& covid19_list
		){
	ChartJs chart;
	chart.set_type(ChartJs::type_line);

	ChartJsDataSet data_set;
	data_set.set_property("label", JsonString("Age Bracket"));

	Vector<Array<float, 3>> days_to_double =
			covid19_list.calculate_increment_period(2.0f);

	Array<ChartJsDataSet, 3> data_sets;

	data_sets.at(0)
			.set_property("label", JsonString("Confirmed"))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_blue().to_string()));

	data_sets.at(1)
			.set_property("label", JsonString("Deaths"))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_red().to_string()));

	data_sets.at(2)
			.set_property("label", JsonString("Recovered"))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_green().to_string()));


	for(u32 i=0; i < covid19_list.data().count(); i++){

		chart.data().labels().push_back(
					covid19_list.data().at(i).timestamp().split(" ").at(0)
					);

		for(u32 j=0; j < data_sets.count(); j++){
			data_sets.at(j).data().push_back(
						String::number(days_to_double.at(i).at(j), "%0.2f")
						);
		}
	}

	chart.data().append(data_sets.at(0));
	chart.data().append(data_sets.at(1));

	JsonObject y_axis = ChartJsOptions::create_axis("linear");
	JsonObject ticks;
	ticks.insert("min", JsonInteger(0));
	y_axis.insert("ticks", ticks);

	chart.options()
			.set_y_axis(y_axis)
			.set_property(
				"title",
				ChartJsOptions::create_title("Days to Double")
				);

	return JsonDocument().stringify(chart.to_object());
}

String Plotter::create_covid19_daily_increase(
		const Covid19List& covid19_list
		){
	ChartJs chart;
	chart.set_type(ChartJs::type_line);

	ChartJsDataSet data_set;
	data_set.set_property("label", JsonString("Age Bracket"));

	Vector<Array<float, 3>> daily_increase =
			covid19_list.calculate_daily_percent_increase();

	Array<ChartJsDataSet, 3> data_sets;

	data_sets.at(0)
			.set_property("label", JsonString("Confirmed"))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_blue().to_string()));

	data_sets.at(1)
			.set_property("label", JsonString("Deaths"))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_red().to_string()));

	data_sets.at(2)
			.set_property("label", JsonString("Recovered"))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_green().to_string()));


	for(u32 i=0; i < covid19_list.data().count(); i++){

		chart.data().labels().push_back(
					covid19_list.data().at(i).timestamp().split(" ").at(0)
					);

		for(u32 j=0; j < data_sets.count(); j++){
			data_sets.at(j).data().push_back(
						String::number(daily_increase.at(i).at(j)*100.0f, "%0.2f")
						);
		}
	}

	chart.data().append(data_sets.at(0));
	chart.data().append(data_sets.at(1));

	JsonObject y_axis = ChartJsOptions::create_axis("logarithmic");
	JsonObject ticks;
	ticks.insert("min", JsonInteger(0));
	ticks.insert("max", JsonInteger(1000));
	y_axis.insert("ticks", ticks);


	chart.options()
			.set_y_axis(y_axis)
			.set_property(
				"title",
				ChartJsOptions::create_title("Percent Daily Increase (Log Scale)")
				);

	return JsonDocument().stringify(chart.to_object());
}
