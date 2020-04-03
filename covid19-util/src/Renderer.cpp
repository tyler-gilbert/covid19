#include "Renderer.hpp"
#include "Compilation.hpp"
#include "Plotter.hpp"

Renderer::Renderer() : m_file_printer(m_output_file){

	m_file_printer.set_verbose_level(Printer::level_trace);
}



void Renderer::execute(){
	load_options();
	process_world();
}


void Renderer::load_options(){
	PrinterObject object_guard(printer(), "options");

	m_input_directory = cli().get_option("renderInput");
	if( m_input_directory.is_empty() ){
		m_input_directory = "data/output";
	}

	m_output_directory = cli().get_option("renderOutput");
	if( m_output_directory.is_empty() ){
		m_output_directory = "markdown";
	}

	m_input_file = cli().get_option("renderInput");
	if( m_input_file.is_empty() ){
		m_input_file = "data/intermediate/world.json";
	}

	printer().key("inputDirectory", m_input_directory);
	printer().key("input", m_input_file);
	printer().key("output", m_output_directory);

}

void Renderer::process_world(){
	CompilationGroup world(
				JsonDocument().load(
					JsonDocument::FilePath(m_input_file)
					).to_object()
				);

	process_compilation_group(world);

}


void Renderer::process_compilation_group(
		CompilationGroup & group
		){

	PrinterObject guard(printer(), group.parent().locale().description());
	String output_file_path =
			m_output_directory +
			"/" +
			group.parent().locale().output_file_base_name() +
			".md";

	Dir::create(
				FileInfo::parent_directory(output_file_path),
				Permissions(0777),
				Dir::IsRecursive(true)
				);

	printer().debug("creating " + output_file_path);
	if( m_output_file.create(
				output_file_path,
				File::IsOverwrite(true)
				) < 0 ){
		printer().error("failed to create " + output_file_path);
	}

	const Locale & locale = group.parent().locale();
	m_output_file.write(String("---\n"));
	m_output_file.write(String("categories:\n"));
	if( locale.is_country() ){
		m_output_file.write("- World\n");
	} else if( locale.is_state() ){
		m_output_file.write("- " + locale.country() + "\n");
	} else if( locale.is_county() ){
		m_output_file.write("- " + locale.state() + "\n");
	}
	m_output_file.write(String("date: \"2016-10-29\"\n"));
	m_output_file.write(String("layout: post\n"));
	m_output_file.write(String("tagline: Four Tips\n"));
	m_output_file.write(String("tags:\n"));
	if( locale.is_country() ){
		m_output_file.write("- World\n");
	} else if( locale.is_state() ){
		m_output_file.write("- " + locale.country() + "\n");
	}
	m_output_file.write(
				"title: " +
				group.parent().locale().description() +
				"\n");

	m_output_file.write("chart: true\n");
	m_output_file.write(String("---\n\n"));

	{
		String links;
		if( locale.is_world() == false ){
			file_printer() << "> ";
			file_printer().hyperlink(
						"World",
						"{{< relref \"world/world\" >}}"
						);
		}

		if( locale.is_county() || locale.is_state() ){
			file_printer() << " / ";
			file_printer().hyperlink(
						locale.country(),
						"{{< relref \"world/" + String(locale.country()).to_lower() + "\" >}}"
						);
		}
		if( locale.is_county() ){
			file_printer() << " / ";
			file_printer().hyperlink(
						locale.state(),
						"{{< relref	\"world/" +
						String(locale.country()).to_lower() +
						"/" +
						String(locale.state()).to_lower() +
						"\" >}}"
						);
		}
		file_printer() << MarkdownPrinter::insert_newline;
		file_printer() << MarkdownPrinter::insert_newline;

	}

	//link to list of children
	if( group.children().count() > 0 ){

		group.children().sort(CompilationGroup::descending_deaths);

		if( group.children().at(0).parent().covid19().cummulative(Covid19::metric_type_deaths) == 0 ){
			//no deadliest places data available

		} else {

			MarkdownHeader county_list(
						file_printer(),
						"Deadliest Places"
						);

			if( locale.country() == "US" ){
				MarkdownPrettyTable deadly_list(
							file_printer(),
				{"Name", "Deaths", "People/Square Mile", "Deaths/Million"}
							);

				file_printer() << MarkdownPrinter::insert_newline;
				for(u32 i=0; (i < 10) && (i < group.children().count()); i++){

					if( group.children().at(i).parent().covid19().cummulative(Covid19::metric_type_deaths) == 0 ){
						break;
					}

					file_printer().append_pretty_table_row(
					{

									"[" +
									group.children().at(i).parent().locale().description() +
									"]({{< ref \"" +
									group.children().at(i).parent().locale().output_file_base_name() +
									"\" >}})"
									,
									String::number(
									group.children().at(i).parent().covid19().cummulative(Covid19::metric_type_deaths)
									),

									String::number(
									group.children().at(i).parent().calculate_population_density(), "%0.2f"
									),

									String::number(
									group.children().at(i).parent().covid19().cummulative(Covid19::metric_type_deaths) * 1.0f /
									(group.children().at(i).parent().population_group().cummulative().total() * 1.0f / 1000000.0f),
									"%0.4f"
									)

								});
				}
			} else {


				MarkdownPrettyTable deadly_list(
							file_printer(),
				{"Name", "Deaths"}
							);

				file_printer() << MarkdownPrinter::insert_newline;
				for(u32 i=0; (i < 10) && (i < group.children().count()); i++){

					if( group.children().at(i).parent().covid19().cummulative(Covid19::metric_type_deaths) == 0 ){
						break;
					}

					file_printer().append_pretty_table_row(
					{

									"[" +
									group.children().at(i).parent().locale().description() +
									"]({{< ref \"" +
									group.children().at(i).parent().locale().output_file_base_name() +
									"\" >}})"
									,

									String::number(
									group.children().at(i).parent().covid19().cummulative(Covid19::metric_type_deaths)
									)

								});
				}
			}
		}


		if( (locale.country() == "US") || locale.is_world() ){
			//scatter plot
			file_printer() << MarkdownPrinter::insert_newline;

			MarkdownHeader county_list(
						file_printer(),
						"Recent Growth"
						);

			file_printer() << MarkdownPrinter::insert_newline;
			{
				MarkdownCode scatter_plot(file_printer(), "chart");
				file_printer() << MarkdownPrinter::insert_newline;

				file_printer() << MarkdownPrinter::insert_newline;
				enum Covid19::metric_type metric = Covid19::metric_type_confirmed;
				if( locale.is_world() ){
					metric = Covid19::metric_type_deaths;
				}


				file_printer()
						<< Plotter().create_growth_trend_bubble_chart(group, metric);
				file_printer() << MarkdownPrinter::insert_newline;
			}
			file_printer() << MarkdownPrinter::insert_newline;
			file_printer() <<
												"The Recent Growth Chart Shows:\n";

			if( locale.is_world() == false ){
				file_printer() << " - Radius: Relative population size\n"
													" - X: Number of Confirmed Cases\n";
			} else {
				file_printer() << " - X: Number of Deaths\n";
			}
			file_printer() <<
												" - Y: Average Growth Rate\n"
												" - Tails: Historical Growth Rate\n";


			file_printer() << MarkdownPrinter::insert_newline;
			file_printer() << "Growth rates need to be below 5 percent (shown in green) before cases will start to peak.";
			file_printer() << MarkdownPrinter::insert_newline;

		}
	}



	process_compilation(group.parent());


	//list of children
	if( group.children().count() > 0 ){

		MarkdownHeader county_list(
					file_printer(),
					group.parent().locale().child_name() + " List"
					);
		MarkdownList locale_list(file_printer(), MarkdownPrinter::list_unordered);
		Vector<Locale> children_locale_list = group.children_locale_list();
		for(const auto & child: children_locale_list){
			file_printer().hyperlink(
						child.description(),
						"{{< relref \"" + child.output_file_base_name() + ".md\" >}}"
						);
		}

	}

	for(auto & child: group.children()){
		process_compilation_group(child);
	}

}


void Renderer::process_compilation(
		const Compilation& compilation,
		bool is_show_notes){
	if( compilation.locale().country() == "US" ){
		file_printer() << MarkdownPrinter::insert_newline;
		MarkdownHeader demographics_header(file_printer(), "Demographics");

		if( compilation.population_group().calculate_average_age() < 5.0f ){
			file_printer() << "Demographics Unavailable";
		} else {
			{
				//average age
				MarkdownList details_list(file_printer(), MarkdownPrinter::list_unordered);

				String total_population;
				if( compilation.population_group().cummulative().total() > 1000000 ){
					total_population = String().format("%0.1f",
																						 compilation.population_group().cummulative().total() *1.0f / 1000000.0f
																						 ) + " million";
				} else if( compilation.population_group().cummulative().total() > 1000 ){
					total_population = String::number(
								compilation.population_group().cummulative().total() / 1000
								) + " thousand";
				}

				file_printer() << String(
														"Total Population: " + total_population
														);

				file_printer() << String().format(
														"Average Age: %0.2f years old",
														compilation.population_group().calculate_average_age()
														);

				file_printer() << String().format(
														"Population Density: %0.2f people per square mile",
														compilation.calculate_population_density()
														);

				file_printer() << String().format(
														"Males vs Females: %0.2f:%0.2f",
														compilation.population_group().cummulative().male_ratio() * 100.0f,
														compilation.population_group().cummulative().female_ratio() * 100.0f
														);
			}

			{
				//population histogram
				file_printer() << MarkdownPrinter::insert_newline;
				MarkdownCode age_histogram(file_printer(), "chart");
				file_printer() << Plotter().create_population_histogram_by_age(
														compilation.population_group()
														);
			}

		}

	}

	{
		file_printer() << MarkdownPrinter::insert_newline;
		MarkdownHeader covid19_header(file_printer(), "COVID19");

		if( compilation.covid19().data().count() < 5 ){
			file_printer() << "COVID19 Data Not Available";
		} else {
			{
				//log scale COVID19 cases
				file_printer() << MarkdownPrinter::insert_newline;

				MarkdownCode covid19_chart(file_printer(), "chart");
				file_printer() << Plotter().create_covid19_history_plot(
														compilation.covid19()
														);
			}
			if( is_show_notes ){
				file_printer() << MarkdownPrinter::insert_newline;
				MarkdownBlockQuote note(file_printer());
				file_printer() << "The above plot shows the number of cases and deaths "
													"from COVID19. The y-axis using a logarithmic scale. "
													"This means each tick is tens times greater than "
													"the previous one. A straight line indicates constant "
													"exponential growth. We want to see the line flatten "
													"out.";
			}

			{
				//daily percent increase
				file_printer() << MarkdownPrinter::insert_newline;
				MarkdownCode covid19_chart(file_printer(), "chart");
				file_printer() << Plotter().create_covid19_daily_growth_rate(
														compilation.covid19()
														);
			}
			if( is_show_notes ){
				file_printer() << MarkdownPrinter::insert_newline;
				MarkdownBlockQuote note(file_printer());
				file_printer() << "The above plot shows the daily increase as a "
													"percentage of the day before. A value of 100 "
													"means it doubled from the previous day. "
													"This value needs to be consistenly below 5 percent "
													"to stop the disease from spreading.";
			}

#if 0
			{
				//days to double
				file_printer() << MarkdownPrinter::insert_newline;
				MarkdownCode covid19_chart(file_printer(), "chart");
				file_printer() << Plotter().create_covid19_days_to_double(
														compilation.covid19()
														);
			}
#endif

			if( is_show_notes ){
				file_printer() << MarkdownPrinter::insert_newline;
				MarkdownBlockQuote note(file_printer());
				file_printer() << "The above plot shows how long the disease takes to "
													"double. This number needs consistently above 14 "
													"to halt the spread of the disease. Holes in the "
													"data mean the measurement was the same from the previous "
													"day (so it would take forever to double.";
			}
		}
	}
}
