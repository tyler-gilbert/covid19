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
					JsonReal(by_age.total())
					);
	}

	chart.data().append(data_set);
	chart.options()
			.set_property("legend", ChartJsOptions::create_legend(false));

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
				.append(JsonReal(population.male() * 100.0f / population.total()))
				.append(JsonReal(population.female() *100.0f / population.total()))
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

	confirmed_data_set.set_property("label", JsonString("Confirmed"));
	confirmed_data_set.set_property(
				"backgroundColor",
				JsonString( ChartJsColor::create_transparent().to_string() )
				);
	confirmed_data_set.set_property(
				"borderColor",
				JsonString( ChartJsColor::create_blue().to_string() )
				);

	deaths_data_set.set_property("label", JsonString("Deaths"));
	deaths_data_set.set_property(
				"backgroundColor",
				JsonString( ChartJsColor::create_transparent().to_string() )
				);

	deaths_data_set.set_property(
				"borderColor",
				JsonString( ChartJsColor::create_black().to_string() )
				);

	for(const auto & covid19: covid19_list.data_smoothed()){
		chart.data().labels().push_back(
					covid19.timestamp_string()
					);


		confirmed_data_set.data().push_back(
					JsonReal(covid19.confirmed())
					);

		deaths_data_set.data().push_back(
					JsonReal(covid19.deaths())
					);
	}

	JsonObject x_axis_object = ChartJsOptions::create_axis("time");
	x_axis_object.insert("distribution", JsonString("linear"));
	x_axis_object.insert("time", ChartJsOptions::create_time("day", "YYYY-MM-DD"));

	JsonObject y_axis_object = ChartJsOptions::create_axis("logarithmic");
	y_axis_object.insert("scaleLabel", ChartJsOptions::create_scale_label("Confirmed / Deaths (Log Scale)"));


	chart.options()
			.set_x_axis(x_axis_object)
			.set_property("legend", ChartJsOptions::create_legend(false))
			.set_y_axis(y_axis_object)
			.set_property(
				"title",
				ChartJsOptions::create_title("COVID19 Cases")
				);

	chart.data()
			.append(confirmed_data_set)
			.append(deaths_data_set);

	return JsonDocument().stringify(chart.to_object());
}

String Plotter::create_covid19_daily_growth_rate(
		const Covid19List& covid19_list
		){
	ChartJs chart;
	chart.set_type(ChartJs::type_line);


	Vector<Covid19Float> daily_increase =
			covid19_list.calculate_daily_growth_rate(1, 0.24f);

	Array<ChartJsDataSet, 3> data_sets;

	data_sets.at(0)
			.set_property("label", JsonString(Covid19Float::name_at(0)))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_blue().to_string()));

	data_sets.at(1)
			.set_property("label", JsonString(Covid19Float::name_at(1) + "Growth Rate"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_black().to_string()));

	data_sets.at(2)
			.set_property("label", JsonString(Covid19Float::name_at(2) + "Growth Rate"))
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
					covid19_list.data().at(i).timestamp_string()
					);

		for(u32 j=0; j < data_sets.count(); j++){
			float value = daily_increase.at(i).at(j)*100.0f;
			data_sets.at(j).data().push_back(
						JsonReal(value)
						);
		}

		decay_zone.data().push_back(
					JsonReal(5.0f)
					);

		truncation_line.data().push_back(
					JsonReal(24.0f)
					);

	}

	chart.data().append(decay_zone);
	chart.data().append(truncation_line);
	chart.data().append(data_sets.at(0));
	chart.data().append(data_sets.at(1));


	JsonObject x_axis_object = ChartJsOptions::create_axis("time");
	x_axis_object.insert("distribution", JsonString("linear"));
	x_axis_object.insert("time", ChartJsOptions::create_time("day", "YYYY-MM-DD"));

	JsonObject y_axis_object = ChartJsOptions::create_axis("linear");
	y_axis_object.insert("scaleLabel", ChartJsOptions::create_scale_label("Percent Daily Increase (Lower is Better)"));

	JsonObject ticks;
	ticks.insert("min", JsonInteger(0));
	ticks.insert("max", JsonInteger(25.0f));
	y_axis_object.insert("ticks", ticks);


	chart.options()
			.set_x_axis(x_axis_object)
			.set_y_axis(y_axis_object)
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
	data_set.set_property("label", JsonString("Days to Double"));

	Vector<Covid19Float> days_to_double =
			covid19_list.calculate_increment_period(2.0f, 5.0f);

	Array<ChartJsDataSet, 3> data_sets;

	data_sets.at(0)
			.set_property("label", JsonString(Covid19Float::name_at(0)))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_blue().to_string()));

	data_sets.at(1)
			.set_property("label", JsonString(Covid19Float::name_at(1)))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(ChartJsColor::create_black().to_string()));

	data_sets.at(2)
			.set_property("label", JsonString(Covid19Float::name_at(2)))
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

	String transparent_gray =
			ChartJsColor::create_gray(128)
			.set_alpha(64)
			.to_string();

	ChartJsDataSet truncation_line;
	truncation_line
			.set_property("label", JsonString("Truncation Line"))
			.set_property("lineTension", JsonInteger(0))
			.set_property("backgroundColor", JsonString(ChartJsColor::create_transparent().to_string()))
			.set_property("borderColor", JsonString(transparent_gray));


	for(u32 i=0; i < covid19_list.data().count(); i++){

		chart.data().labels().push_back(
					covid19_list.data().at(i).timestamp_string().split(" ").at(0)
					);

		for(u32 j=0; j < data_sets.count(); j++){
			if( days_to_double.at(i).at(j) > 24 ){
				data_sets.at(j).data().push_back(JsonReal(24.0f));
			} else {
				data_sets.at(j).data().push_back(
							JsonReal(days_to_double.at(i).at(j))
							);
			}


		}

		growth_zone.data().push_back(
					JsonReal(14.0f)
					);

		truncation_line.data().push_back(
					JsonReal(24.0f)
					);
	}

	chart.data().append(growth_zone);
	chart.data().append(truncation_line);
	chart.data().append(data_sets.at(0));
	chart.data().append(data_sets.at(1));


	JsonObject x_axis_object = ChartJsOptions::create_axis("time");
	x_axis_object.insert("distribution", JsonString("linear"));
	x_axis_object.insert("time", ChartJsOptions::create_time("day", "YYYY-MM-DD"));

	JsonObject y_axis_object = ChartJsOptions::create_axis("linear");
	y_axis_object.insert("scaleLabel", ChartJsOptions::create_scale_label("Days (Higher is Better)"));

	JsonObject ticks;
	ticks.insert("min", JsonInteger(0));
	ticks.insert("max", JsonInteger(25));
	y_axis_object.insert("ticks", ticks);

	chart.options()
			.set_y_axis(x_axis_object)
			.set_y_axis(y_axis_object)
			.set_property(
				"title",
				ChartJsOptions::create_title("Days to Double (Capped at 24 Days)")
				);

	return JsonDocument().stringify(chart.to_object());
}

String Plotter::create_10x_growth_vs_density_vs_latitude_bubble_plot(
		const CompilationGroup& compilation_group
		){
	ChartJs chart;
	chart.set_type(ChartJs::type_line);

	ChartJsDataSet growth_trend_scatter;
	Vector<ChartJsColor> color_list = ChartJsColor::create_standard_palette();
	Vector<ChartJsDataSet> data_set_list;

	Vector<float> point_sizes;
	StringList labels;
	StringList background_colors;
	String point_background_color = ChartJsColor::create_blue()
			.set_alpha(64)
			.to_string();

	int count = 0;
	for(const CompilationGroup & group: compilation_group.children()){

		float latitude = 0.0f;
		latitude = group.parent().locale().latitude().to_float();
		if( latitude > 0.1f ){
			JsonObject data_object;
			data_object.insert("x", JsonReal(group.parent().calculate_population_density()));
			data_object.insert("y", JsonReal(group.parent().locale().latitude().to_float()));

			float point_size =
					group.parent().feature_group().daily_growth_rate_for_10x().at(5).confirmed() * 100.0f;

			if( point_size > 100.0f ){
				point_size = 100.0f;
			}

			point_sizes.push_back(
						point_size
						);
			labels.push_back(group.parent().locale().description() + " - " + String::number(point_size, "%0.2f"));
			background_colors.push_back(point_background_color);

			ChartJsDataSet data_set = ChartJsDataSet()
					.set_property("label", JsonString(
													group.parent().locale().description() + " - " + String::number(point_size, "%0.2f")
													)
												)
					.set_property("pointRadius", JsonReal(point_size))
					.set_property("pointHoverRadius", JsonReal(point_size))
					.set_property(
						"borderColor",
						JsonString(
							color_list.at(count % color_list.count()).to_string()
							)
						)
					.set_property(
						"backgroundColor",
						JsonString(
							color_list.at(count % color_list.count()).set_alpha(64).to_string()
							)
						);

			data_set.data().push_back(data_object);
			data_set_list.push_back(
						data_set
						);
			count++;
			if( count == 25 ){
				break;
			}

		}

	}

	JsonObject x_axis_object = ChartJsOptions::create_axis("logarithmic");
	x_axis_object.insert("position", JsonString("bottom"));
	x_axis_object.insert("scaleLabel", ChartJsOptions::create_scale_label("People / Square Mile (Log Scale)"));

	JsonObject y_axis_object = ChartJsOptions::create_axis("linear");
	y_axis_object.insert("scaleLabel", ChartJsOptions::create_scale_label("Latitude (degrees)"));

	chart.options()
			.set_property("legend", ChartJsOptions::create_legend(false))
			.set_x_axis(x_axis_object)
			.set_y_axis(y_axis_object)
			.set_property(
				"title",
				ChartJsOptions::create_title("Days from 10 to 100 Cases")
				);

	for(const auto & data_set: data_set_list){
		chart.data().append(data_set);
	}

	return JsonDocument().stringify(chart.to_object());
}

String Plotter::create_growth_trend_bubble_chart(
		const CompilationGroup& compilation_group,
		enum Covid19::metric_type metric_type
		){

	ChartJs chart;
	chart.set_type(ChartJs::type_line);

	Vector<ChartJsColor> color_list = ChartJsColor::create_standard_palette();
	Vector<ChartJsDataSet> data_set_list;
	ChartJsColor transparent_color =
			ChartJsColor::create_transparent();

	const u32 cummulative_population = compilation_group.parent().population_group().cummulative().total();

	u32 count = 0;
	for(const CompilationGroup & group: compilation_group.children()){

		if( group.parent().covid19().data().count() &&
				group.parent().covid19().total(metric_type) > 20 ){
			Vector<Covid19Float> daily_growth =
					group.parent().covid19().calculate_daily_growth_rate(10, 0.24f);

			if( daily_growth.count() > 1 ){
				float rate = daily_growth.back().metric(metric_type)*100.0f;
				if( rate > 0.01f ){

					ChartJsColor background_color;
					if( rate < 5.0f ){
						background_color = ChartJsColor::create_green();
					} else {
						background_color = ChartJsColor::create_red();
					}

					ChartJsDataSet trend_data_set;
					for(u32 i=1; i < daily_growth.count(); i++){
						if( group.parent().covid19().data().at(i).metric(metric_type) > 20 ){
							JsonObject data_object;
							data_object.insert(
										"x",
										JsonReal(group.parent().covid19().data().at(i).metric(metric_type))
										);
							data_object.insert("y", JsonReal(
																	 daily_growth.at(i).metric(metric_type)*100.0f)
																 );
							trend_data_set.append(data_object);
						}
					}

					trend_data_set
							.set_property("label", JsonString(group.parent().locale().description()))
							.set_property("pointRadius", JsonReal(0))
							.set_property("pointHoverRadius", JsonReal(0))
							.set_property(
								"borderColor",
								JsonString(
									color_list.at(count % color_list.count())
									.set_alpha(64)
									.to_string()
									)
								)
							.set_property(
								"backgroundColor",
								JsonString(
									transparent_color.to_string()
									)
								);


					ChartJsDataSet end_data_set;

					JsonObject data_object;
					data_object.insert("x", JsonReal(group.parent().covid19().data().back().metric(metric_type)));
					data_object.insert("y", JsonReal(rate));


					float point_size;
					if( compilation_group.parent().locale().is_world() == false ){
						point_size = group.parent().population_group().cummulative().total() *1.0f / cummulative_population * 100.0f;
						if( point_size < 2.0f ){
							point_size = 2.0f;
						}
					} else {
						point_size = 10.0f;
					}

					end_data_set
							.set_property("label", JsonString(group.parent().locale().description()))
							.set_property("pointRadius", JsonReal(point_size))
							.set_property("pointHoverRadius", JsonReal(point_size))
							.set_property(
								"borderColor",
								JsonString(
									background_color.to_string()
									)
								)
							.set_property(
								"backgroundColor",
								JsonString(
									background_color.set_alpha(64).to_string()
									)
								);

					end_data_set.data().push_back(data_object);

					data_set_list.push_back(end_data_set);
					data_set_list.push_back(trend_data_set);
					count++;
				}
			}
		}
	}

	JsonObject x_axis_object = ChartJsOptions::create_axis("logarithmic");
	x_axis_object.insert("position", JsonString("bottom"));
	x_axis_object.insert("scaleLabel", ChartJsOptions::create_scale_label("Number of Confirmed Cases (Log Scale)"));

	JsonObject y_axis_object = ChartJsOptions::create_axis("linear");
	y_axis_object.insert("scaleLabel", ChartJsOptions::create_scale_label("Growth Rate (Lower is Better)"));

	{
		JsonObject ticks;
		ticks.insert("min", JsonInteger(0));
		ticks.insert("max", JsonInteger(25.0f));
		y_axis_object.insert("ticks", ticks);
	}

	{
		JsonObject ticks;
		ticks.insert("min", JsonInteger(20));
		x_axis_object.insert("ticks", ticks);
	}

	for(const auto & data_set: data_set_list){
		chart.data().append(data_set);
	}

	chart.options()
			.set_property("legend", ChartJsOptions::create_legend(false))
			.set_x_axis(x_axis_object)
			.set_y_axis(y_axis_object);

	return JsonDocument().stringify(chart.to_object());
}
