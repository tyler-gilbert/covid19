#include "Renderer.hpp"
#include "Compilation.hpp"
#include "Plotter.hpp"
#include "Factbook.hpp"

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
	PrinterObject pg(printer(), "Process World");
	printer().debug("Load world compilation");
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

		render_deadliest_places(group);



		if( (locale.country() == "UnitedStates") || locale.is_world() ){
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

	const Factbook& factbook = compilation.factbook();
	render_demographics(compilation);
	render_covid19(compilation);
}

void Renderer::render_deadliest_places(CompilationGroup& group){
	const Locale locale = group.parent().locale();

	PrinterObject pg(printer(), "Deadliest places for " + locale.description());
	group.children().sort(CompilationGroup::descending_deaths);

	if( group.children()
			.at(0)
			.parent()
			.covid19()
			.cummulative(Covid19::metric_type_deaths) == 0 ){
		//no deadliest places data available
		printer().debug(
					"no deadliest places available for " +
					locale.description()
					);
		return;
	}

	CompilationGroup top_deadliest;

	printer().debug("create top ten deadliest");
	top_deadliest.parent() = group.parent();
	for(u32 i=0; (i < 15) && (i < group.children().count()); i++){
		top_deadliest.children().push_back(group.children().at(i));
	}

	printer().debug(
				"has " + String::number(top_deadliest.children().count()) + " deadliest places");

	MarkdownHeader sub_list(
				file_printer(),
				"Deadliest Places"
				);

	String population_density_label = "People/Square Mile";

	{
		//deaths/pie chart

		String per_population_label;
		u32 per_population;
		per_population = 1000000;
		per_population_label = "Million";

		MarkdownHeader deaths_per_population_header(
					file_printer(),
					"Deaths per " + per_population_label + " Population"
					);

		top_deadliest.children().sort(CompilationGroup::descending_deaths_per_million_population);

		file_printer() << MarkdownPrinter::insert_newline;
		MarkdownCode pie_chart_deaths_per_population(file_printer(), "chart");
		file_printer() << Plotter().create_covid19_per_million_pie_chart(
												top_deadliest,
												Covid19::metric_type_deaths,
												per_population
												);
		file_printer() << MarkdownPrinter::insert_newline;
	}

	{

		top_deadliest.children().sort(CompilationGroup::descending_deaths);

		MarkdownPrettyTable deadly_list(
					file_printer(),
		{"Name", "Deaths", population_density_label, "Deaths/Million"}
					);

		file_printer() << MarkdownPrinter::insert_newline;
		for(u32 i=0; i < top_deadliest.children().count(); i++){

			if( top_deadliest.children().at(i).parent().covid19().cummulative(Covid19::metric_type_deaths) == 0 ){
				printer().debug(
							"no deaths for " +
							top_deadliest.children().at(i).parent().locale().description()
							);
				break;
			}

			float population_density =
					top_deadliest.children().at(i).parent().calculate_population_density();

			String population_density_string;
			if( population_density > 0.1f ){
				population_density_string = String::number(population_density, "%0.2f");
			} else {
				population_density_string = "not available";
			}

			file_printer().append_pretty_table_row(
			{

							"[" +
							top_deadliest.children().at(i).parent().locale().description() +
							"]({{< ref \"" +
							top_deadliest.children().at(i).parent().locale().output_file_base_name() +
							"\" >}})",

							String::number(
							top_deadliest.children()
							.at(i)
							.parent()
							.covid19().cummulative(Covid19::metric_type_deaths)
							),

							population_density_string,

							String::number(
							top_deadliest.children()
							.at(i)
							.parent()
							.calculate_covid19_cummulative_per_population(
							Covid19::metric_type_deaths, 1000000.0f
							),
							"%0.4f"
							)

						});
		}
	}
}

void Renderer::render_demographics(const Compilation& compilation){
	if( (compilation.locale().country() == "UnitedStates") ||
			compilation.locale().is_country()
			){
		const Factbook& factbook = compilation.factbook();
		file_printer() << MarkdownPrinter::insert_newline;
		MarkdownHeader demographics_header(file_printer(), "Demographics");

		bool is_population_group_available = compilation.population_group().calculate_average_age() > 5.0f;

		float population_density = 0.0f;
		u32 population = 0;
		String population_density_units;

		PRINTER_TRACE(printer(), "calculate demographic indicators");
		if( factbook.is_valid() ){
			population_density = factbook.calculate_population_density();
			population = factbook.population();
			population_density_units = "people per square kilometer";
		} else {
			population_density = compilation.calculate_population_density();
			population = compilation.population_group().cummulative().total();
			population_density_units = "people per square mile";
		}

		{
			//average age
			MarkdownList details_list(file_printer(), MarkdownPrinter::list_unordered);

			String total_population;

			if( population > 1000000 ){
				total_population =
						String().format(
							"%0.1f",
							population *1.0f / 1000000.0f
							) + " million";

			} else if( population > 1000 ){
				total_population =
						String::number(
							population / 1000
							) + " thousand";
			}

			file_printer() << String(
													"Total Population: " + total_population
													);

			file_printer() << (String().format(
													 "Population Density: %0.2f ",
													 population_density
													 ) + population_density_units);
		}

		if( is_population_group_available ){
			if( is_population_group_available ){
				file_printer() << String().format(
														"Average Age: %0.2f years old",
														compilation.population_group().calculate_average_age()
														);

				file_printer() << String().format(
														"Males vs Females: %0.2f:%0.2f",
														compilation.population_group().cummulative().male_ratio() * 100.0f,
														compilation.population_group().cummulative().female_ratio() * 100.0f
														);
			}
		}

		if( is_population_group_available ){
			//population histogram
			file_printer() << MarkdownPrinter::insert_newline;
			MarkdownCode age_histogram(file_printer(), "chart");
			file_printer() << Plotter().create_population_histogram_by_age(
													compilation.population_group()
													);
		}
	}
}

void Renderer::render_covid19(
		const Compilation& compilation
		){
	constexpr bool is_show_notes = false;
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

void Renderer::render_factbook(
		const Compilation& compilation
		){

}

