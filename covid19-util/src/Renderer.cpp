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

void Renderer::process_directory(){

	StringList input_list = Dir::read_list(
				m_input_directory
				);

	for(const auto & input: input_list){

		FileInfo info = File::get_info(m_input_directory + "/" + input);
		if( info.is_directory() ){
			process_country_directory(m_input_directory + "/" + input);
		} else if( FileInfo::suffix(input) == "json" ){
			process_file(m_input_directory + "/" + input);
		}
	}

}

void Renderer::process_country_directory(
		const String & directory_path
		){
	StringList input_list = Dir::read_list(
				directory_path
				);

	for(const auto & input: input_list){
		process_file(directory_path + "/" + input);
	}
}


void Renderer::process_compilation_group(
		const CompilationGroup & group
		){

	PrinterObject guard(printer(), group.parent().locale().description());
	String output_file_path =
			m_output_directory +
			"/" +
			group.parent().locale().output_file_base_name() + "_page.md";

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
		if( locale.is_county() || locale.is_state() ){
			file_printer().hyperlink(
						locale.country(),
						"{{< relref \"world/" + String(locale.country()).to_lower() + "_page\" >}}"
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
						"_page\" >}}"
						);
		}
		file_printer() << MarkdownPrinter::insert_newline;
		file_printer() << MarkdownPrinter::insert_newline;

	}

#if 0
	//link to list of children
	if( group.children().count() > 0 ){
		String child_name_lower = group.parent().locale().child_name();
		child_name_lower.to_lower();
		file_printer().hyperlink(
					group.parent().locale().child_name() + " List",
					"#" + child_name_lower + "-list");
		file_printer() << MarkdownPrinter::insert_newline;
	}
#endif

	{
		//Total deaths

		//Top ten deadliest children

	}

	{
		//Cases

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
						"{{< relref \"" + child.output_file_base_name() + "_page.md\" >}}"
						);
		}

	}

	for(const auto & child: group.children()){
		process_compilation_group(child);
	}

}


void Renderer::process_file(
		const String & file_path
		){
	String base_name = FileInfo::base_name(file_path);

	if( base_name.find("(") != String::npos ){ return; }
	if( base_name.find("Unassigned") != String::npos ){ return; }
	if( base_name.find("Princess") != String::npos ){ return; }
	if( base_name.find("null") != String::npos ){ return; }


	Vector<Compilation> compilation_list;
	{
		JsonArray compilation_array = JsonDocument().load(
					JsonDocument::FilePath(file_path)
					).to_array();

		compilation_list = Compilation::load(
					compilation_array
					);
	}

	Compilation top_level_compilation;
	for(const auto & compilation: compilation_list){
		if( compilation.locale().county() == "null" ){
			top_level_compilation = compilation;
		}
	}

	String output_file_path;

	if( top_level_compilation.locale().state() == "null" ){
		output_file_path=
				m_output_directory +
				"/" +
				top_level_compilation.locale().country() +
				".md";
	} else {
		output_file_path=
				m_output_directory +
				"/" +
				top_level_compilation.locale().country() +
				"/" +
				top_level_compilation.locale().state() +
				".md";
	}

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

	m_output_file.write(String("---\n"));
	m_output_file.write(String("categories:\n"));
	m_output_file.write("- " + top_level_compilation.locale().country() + "\n");
	m_output_file.write(String("date: \"2020-03-30\"\n"));
	m_output_file.write(String("layout: post\n"));
	m_output_file.write(String("tagline: Four Tips\n"));
	m_output_file.write(String("tags:\n"));
	m_output_file.write("- " + top_level_compilation.locale().country() + "\n");

	if( top_level_compilation.locale().state() == "null" ){
		m_output_file.write(
					"title: " +
					top_level_compilation.locale().country() +
					"\n");
	} else {
		m_output_file.write(
					"title: " +
					top_level_compilation.locale().state() +
					", " +
					top_level_compilation.locale().country() +
					"\n");
	}
	m_output_file.write("chart: true\n");
	if( (top_level_compilation.locale().state() != "null") &&
			(!top_level_compilation.locale().state().is_empty()) &&
			(top_level_compilation.locale().state().find("(") == String::npos)
			){
		m_output_file.write("menu:\n");
		m_output_file.write("  sidebar:\n");
		m_output_file.write("    name: " + top_level_compilation.locale().state() + "\n");
		m_output_file.write("    parent: " + top_level_compilation.locale().country() + "\n");
	}
	m_output_file.write(String("---\n\n"));

	{
		if( compilation_list.count() > 1 ){
			MarkdownList contents_list(file_printer(), MarkdownPrinter::list_unordered);
			file_printer().hyperlink("State Overview", "#state-overview");
			file_printer().hyperlink("County List", "#county-list");
		}

		{
			process_compilation(top_level_compilation, true);
		}

		if( compilation_list.count() > 1 ){
			file_printer() << MarkdownPrinter::insert_newline;
			MarkdownHeader county_list(file_printer(), "County List");
			MarkdownList locale_list(file_printer(), MarkdownPrinter::list_unordered);
			file_printer() << MarkdownPrinter::insert_newline;
			StringList counties;
			for(const auto & compilation: compilation_list){
				counties.push_back(compilation.locale().county());
			}

			counties.sort(StringList::ascending);

			for(const auto & county: counties){
				String lower_county = county;
				lower_county.to_lower();
				if( county != "null" ){
					printer() << county;
					file_printer().hyperlink(county, "#" + lower_county);
				}
			}

			file_printer() << MarkdownPrinter::insert_newline;

			//loop through county details
			for(const auto & county: counties){
				for(const auto & compilation: compilation_list){
					String locale_county = compilation.locale().county();
					if( county != "null" && (county == locale_county) ){
						MarkdownHeader county_header(file_printer(), county);
						process_compilation(compilation);
					}
				}
			}
		}



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

				file_printer() << String().format(
														"Total Population: %d",
														compilation.population_group().total()
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
														compilation.population_group().total().male_ratio() * 100.0f,
														compilation.population_group().total().female_ratio() * 100.0f
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
				file_printer() << Plotter().create_covid19_daily_increase(
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

			{
				//days to double
				file_printer() << MarkdownPrinter::insert_newline;
				MarkdownCode covid19_chart(file_printer(), "chart");
				file_printer() << Plotter().create_covid19_days_to_double(
														compilation.covid19()
														);
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
