#include <sapi/sys.hpp>
#include <sapi/fs.hpp>
#include <sapi/fmt.hpp>
#include "Importer.hpp"
#include "Locale.hpp"
#include "Compilation.hpp"

Importer::Importer(){

}


void Importer::execute(){
	load_options();


	m_json_array_data
			.push_back(&m_covid19_array)
			.push_back(&m_land_area_array)
			.push_back(&m_population_array);

	if( m_is_process_land_area ){
		printer().info("process land area data");
		process_land_area_data();
		printer().info("save land area data");
		JsonDocument().save(
					m_land_area_array,
					File::Path(m_intermediate_directory_path + "/US_landArea.json")
					);
	} else {
		printer().info("load land area data");
		m_land_area_array = JsonDocument().load(
					File::Path(m_intermediate_directory_path + "/US_landArea.json")
					).to_array();
	}

	if( m_is_process_population ){
		printer().info("process population data");
		process_population_data();
		printer().info("save population data");
		JsonDocument().save(
					m_population_array,
					File::Path(m_intermediate_directory_path + "/US_population.json")
					);
	} else {
		printer().info("load population data");
		m_population_array = JsonDocument().load(
					File::Path(m_intermediate_directory_path + "/US_population.json")
					).to_array();
	}


	if( m_is_process_covid19 ){
		printer().info("process covid19 data");
		process_covid19_data();
		printer().info("save covid19 data");
		JsonDocument().save(
					m_covid19_array,
					File::Path(m_intermediate_directory_path + "/covid19.json")
					);
	} else {
		printer().info("load covid19 data");
		m_covid19_array = JsonDocument().load(
					File::Path(m_intermediate_directory_path + "/covid19.json")
					).to_array();
	}

	create_compilation_output();
	create_world_output();

}


void Importer::load_options(){
	PrinterObject printer_options(printer(), "options");
	m_input_directory_path = cli().get_option("importInput");
	if( m_input_directory_path.is_empty() ){
		m_input_directory_path = "data/input";
	}

	m_intermediate_directory_path = cli().get_option("importIntermediate");
	if( m_intermediate_directory_path.is_empty() ){
		m_intermediate_directory_path = "data/intermediate";
	}

	m_output_directory_path = cli().get_option("importOutput");
	if( m_output_directory_path.is_empty() ){
		m_output_directory_path = "data/output";
	}

	m_is_process_land_area = cli().get_option("landArea") == "true";
	m_is_process_population = cli().get_option("population") == "true";
	m_is_process_covid19 = true;
	if( cli().get_option("covid19") == "false" ){
		m_is_process_covid19 = false;
	}

	printer().key("input", m_input_directory_path);
	printer().key("output", m_output_directory_path);
}


void Importer::create_compilation_output(){

	String compilation_file_path =
			m_intermediate_directory_path + "/compilation.json";

	if( File::exists(compilation_file_path) == true ){
	//if( 0 ){
		m_compilation_array = JsonDocument().load(
					JsonDocument::FilePath(compilation_file_path)
					).to_array();
	} else {
		PrinterObject compliation_guard(printer(), "creating compiliation");
		//builds a list of all unique locales
		Vector<Locale> locale_list = build_locale_list();
		Vector<String> country_list = build_country_list();

		Vector<Compilation> compilation_list;
		compilation_list.reserve( locale_list.count() );

		for(auto & locale: locale_list){
			PrinterObject locale_guard(printer(), locale.description());
			JsonObject land_area_object = find_locale(
						m_land_area_array,
						locale
						);

			JsonObject population_object = find_locale(
						m_population_array,
						locale
						);

			JsonObject covid19_object = find_locale(
						m_covid19_array,
						locale
						);

			PopulationGroup locale_population_group =
					PopulationGroup(
						population_object.at("population").to_object()
						);

			Covid19List covid19_data;

			if( is_filter_covid19(locale) == false ){
				covid19_data = Covid19List(
							covid19_object.at("covid19").to_array()
							);
			}

			//data wrangling
			locale.set_land_area(
						land_area_object
						.at("locale").to_object()
						.at("landArea").to_float()
						);

			compilation_list.push_back(
						Compilation(
							locale,
							locale_population_group,
							covid19_data
							)
						);

			printer().info("added locale");
		}

		printer().info("Checking for %d total countries", country_list.count());
		for(auto & country: country_list){
			Locale locale;
			locale.set_country(country);

			bool is_country_found = false;
			for(const auto & compilation: compilation_list){
				if( compilation.locale().is_country() &&
						compilation.locale().country() == country ){
					is_country_found = true;
					break;
				}
			}

			if( is_country_found == false ){
				printer().info("adding top level country locale " + locale.description());
				locale
						.set_state("null")
						.set_county("null");
				compilation_list.push_back(
							Compilation(
								locale,
								PopulationGroup(),
								Covid19List()
								)
							);
			}
		}

		for(const auto & compilation: compilation_list){
			printer().info("adding " + compilation.locale().description() + " to output");
			m_compilation_array.append(
						compilation.to_object()
						);
		}


		printer().info("saving compiliation");
		JsonDocument().save(
					m_compilation_array,
					JsonDocument::FilePath(m_intermediate_directory_path + "/compilation.json")
					);
	}

}

void Importer::create_world_output(){
	CompilationGroup world = CompilationGroup(
				m_compilation_array
				);
	printer().info("world has %d compiliations", world.compilation_count());

	JsonDocument().save(
				world.to_object(),
				JsonDocument::FilePath(m_intermediate_directory_path + "/world.json")
				);
}

bool Importer::is_filter_covid19(const Locale & locale) const {
	if( locale.country() == "US" ){
		if( locale.state() == "null" ){ return true; }
	}
	return false;
}

void Importer::process_land_area_data(){
	PrinterObject object_guard(printer(), "Land Area");
	String file_path =
			m_input_directory_path + "/LandArea.csv";

	if( File::exists(file_path) == false ){
		printer().error(
					"failed to load land mass csv file " +
					file_path
					);
		return;
	}

	Matrix<String> data = Csv::load(
				file_path
				);

	{
		PrinterObject object_guard(printer(), "header",Printer::level_debug);
		printer() << data.at(0);
	}

	for(u32 i=1; i < data.count(); i++){
		const auto & row = data.at(i);
		printer().debug("processing " + row.at(0));
		JsonObject entry;
		String county = row.at(0);
		String state;
		String land_area;

		String location = row.at(0);
		StringList location_items = location.split(",");

		if( location_items.count() == 2 ){
			county = location_items.at(0);
			state = location_items.at(1);
		} else if( location == "UNITED STATES" ){
			county = "null";
			state = "null";
		} else {
			county = "null";
			state = location;
		}

		land_area = row.at(3);


		if( county != "null" ){
			//all land area data will be computed by summing county data
			entry.insert("locale",
									 Locale()
									 .set_county(county)
									 .set_state(state)
									 .set_country("US")
									 .set_land_area(land_area.to_float())
									 .to_object()
									 );
			m_land_area_array.append(entry);
		}
	}

	{
		PrinterObject object_guard(printer(), "LandArea");
		printer() << m_land_area_array;
	}
}

void Importer::process_population_data(){
	PrinterObject object_guard(printer(), "Population");
	String file_path =
			m_input_directory_path + "/population.csv";

	if( File::exists(file_path) == false ){
		printer().error(
					"failed to population csv file " +
					file_path
					);
		return;
	}

	Matrix<String> data = Csv::load(
				file_path
				);

	{
		PrinterObject object_guard(printer(), "header",Printer::level_debug);
		printer() << data.at(0);
	}

	for(u32 i=2; i < data.count(); i++){
		const auto & row = data.at(i);
		printer().debug("processing " + row.at(1));
		JsonObject entry;

		String type;
		String county = row.at(0);
		String state;
		String population;
		String male_popuation;

		String location = row.at(1);
		StringList location_items = location.split(",");
		if( location_items.count() == 2 ){
			if( location.find("county") != String::npos ){
				type = "county";
				county = location_items.at(0);
				state = location_items.at(1);
			} else {
				type = "other";
				county = location_items.at(0);
				state = location_items.at(1);
			}
		}

		population = row.at(2);
		male_popuation = row.at(6);

		entry.insert("locale",
								 Locale()
								 .set_county(county)
								 .set_state(state)
								 .set_country("US")
								 .to_object()
								 );

		PopulationGroup population_group;
		population_group.set_total(
					create_population(
						row,
						convert_csv_column_character('C'),
						0,
						Population::absolute_maximum_age())
					);

		u32 column = convert_csv_column_character('O');
		for(u32 i = 0; i < population_group.by_age_count(); i++){
			u32 max_age = i*5 + 4;
			if( max_age == 89 ){
				max_age = Population::absolute_maximum_age();
			}
			int adjust = 0;
			if( i*5 == 60 ){
				adjust = -1;
			}
			population_group.by_age(i) =
					create_population(
						row,
						column+adjust,
						i*5,
						max_age
						);
			column += 12;
		}

		entry.insert("population", population_group.to_object());
		m_population_array.append(entry);
	}

	{
		PrinterObject object_guard(printer(), "data");
		printer() << m_population_array;
	}

}

void Importer::process_covid19_data(){
	PrinterObject object_guard(
				printer(),
				"covid19"
				);
	String directory_path = "data/COVID-19/csse_covid_19_data/csse_covid_19_daily_reports";
	StringList daily_reports = Dir::read_list(
				directory_path
				);

	daily_reports.sort(StringList::ascending);

	u32 i=0;
	for(const auto & path: daily_reports){
		if( (path != ".gitignore") && (path != "README.md") ){
			process_covid19_daily_report(directory_path + "/" + path);
		}
	}

	{
		PrinterObject object_guard(printer(), "data", Printer::level_info);
		printer() << m_covid19_array;
	}

}

void Importer::process_covid19_daily_report(
		const var::String & file_path
		){
	PrinterObject object_guard(
				printer(),
				FileInfo::base_name(file_path)
				);

	if( File::exists(file_path) == false ){
		printer().error(
					"failed to load daily report " +
					file_path
					);
		return;
	}

	printer().debug("load " + file_path);
	Matrix<String> data = Csv::load(
				file_path
				);

	{
		//PrinterObject object_guard(printer(), "header",Printer::level_info);
		//printer() << data.at(0);
	}

	u32 admin2_offset = data.at(0).find("Admin2");

	u32 province_state_offset = data.at(0).find("Province_State");
	if( province_state_offset == data.at(0).count() ){
		province_state_offset = data.at(0).find("Province/State");
	}

	u32 country_region_offset = data.at(0).find("Country_Region");
	if( country_region_offset == data.at(0).count() ){
		country_region_offset = data.at(0).find("Country/Region");
	}

	u32 confirmed_offset = data.at(0).find("Confirmed");
	u32 recovered_offset = data.at(0).find("Recovered");
	u32 deaths_offset = data.at(0).find("Deaths");
	u32 last_update_offset = data.at(0).find("Last Update");
	if( last_update_offset == data.at(0).count() ){
		last_update_offset = data.at(0).find("Last_Update");
	}

	u32 latitude_offset = data.at(0).find("Lat");
	u32 longitude_offset = data.at(0).find("Long_");

	for(u32 i=1; i < data.count(); i++){
		const StringList & row = data.at(i);
		String county;
		if( admin2_offset	< row.count() ){
			county = row.at(admin2_offset);
			if( county.is_empty() ){
				county = "null";
			}
		} else {
			county = "null";
		}

		String state;
		if( province_state_offset	< row.count() ){
			state = row.at(province_state_offset);
			if( state.is_empty() ){
				state = "null";
			}
		} else {
			state = "null";
		}

		String country;
		if( country_region_offset	< row.count() ){
			country = row.at(country_region_offset);
		} else {
			country = "null";
		}

		if( country == "US" ){
			if( state.find(",") != String::npos ){
				StringList state_items = state.split(",");
				county = state_items.at(0);
				state = state_items.at(1);
			}
		}


		String confirmed;
		if( confirmed_offset	< row.count() ){
			confirmed = row.at(confirmed_offset);
		} else {
			confirmed = "null";
		}

		String recovered;
		if( recovered_offset	< row.count() ){
			recovered = row.at(recovered_offset);
		} else {
			recovered = "null";
		}

		String deaths;
		if( deaths_offset	< row.count() ){
			deaths = row.at(deaths_offset);
		} else {
			deaths = "null";
		}

		String last_update;
		if( last_update_offset	< row.count() ){
			last_update = row.at(last_update_offset);
		} else {
			last_update = "null";
		}

		String latitude = "null";
		if( latitude_offset < row.count() ){
			latitude = row.at(latitude_offset);
		}

		String longitude = "null";
		if( longitude_offset < row.count() ){
			longitude = row.at(longitude_offset);
		}

		Locale locale = Locale()
				.set_county(county)
				.set_state(state)
				.set_country(country);

		Covid19 covid19 = Covid19()
				.set_confirmed(confirmed.to_integer())
				.set_deaths(deaths.to_integer())
				.set_recovered(recovered.to_integer())
				.set_timestamp(
					FileInfo::base_name(file_path)
					);

		if( state.find("Princess") == String::npos ){
			JsonObject locale_object = find_locale(
						m_covid19_array,
						locale
						);

			if( locale_object.is_empty() ){
				JsonArray locale_data;
				locale_data.append(covid19.to_object());
				locale_object.insert("locale", locale.to_object());
				locale_object.insert("covid19", locale_data);
				m_covid19_array.append(locale_object);
			} else {
				if( (latitude != "null") &&
						(locale_object.at("locale").to_object().at("latitude").to_string() == "null") ){
					locale_object.at("locale").to_object().insert("latitude", JsonString(latitude));
					locale_object.at("locale").to_object().insert("longitude", JsonString(longitude));
				}
				locale_object.at("covid19").to_array().append(covid19.to_object());
			}
		}
	}
}

JsonObject Importer::find_locale(
		const JsonArray& array,
		const Locale& locale){

	for(u32 i=0; i < array.count(); i++){
		Locale current_locale =
				Locale(array.at(i).to_object().at("locale").to_object());

		if( current_locale == locale ){
			return array.at(i).to_object();
		}
	}

	return JsonObject();
}

Population Importer::create_population(
		const Vector<String> & row,
		u32 total_column,
		u32 minimum_age,
		u32 maximum_age
		){

	Population population = Population()
			.set_total(
				sanitize(row.at(total_column)).to_integer()
				)
			.set_male(
				sanitize(row.at(total_column+4)).to_integer()
				)
			.set_female(
				sanitize(row.at(total_column+8)).to_integer()
				)
			.set_minimum_age(minimum_age)
			.set_maximum_age(maximum_age);

	return population;
}

u32 Importer::convert_csv_column(const var::String & value){
	u32 offset = 0;
	u32 len = value.length();
	if( len == 1 ){
		offset = convert_csv_column_character(value.at(0));
	} else if( len == 2 ){
		offset = 26 * (convert_csv_column_character(value.at(0)+1)) +
				convert_csv_column_character(value.at(1));
	}

	return offset;
}

u32 Importer::convert_csv_column_character(char c){
	return c - 'A';

}

StringList Importer::build_country_list() const{
	StringList result;
	for(const auto * array: m_json_array_data){
		for(u32 i=0; i < array->count(); i++){
			Locale locale = Locale(
						array->at(i).to_object().at("locale").to_object()
						);
			String country = locale.country();
			if( result.find(country) == result.count() ){
				result.push_back(country);
			}
		}
	}
	return result;
}

Vector<Locale> Importer::build_locale_list(
		const var::String & country,
		const var::String & state
		){
	Vector<Locale> result;
	for(const auto * array: m_json_array_data){
		for(u32 i=0; i < array->count(); i++){
			Locale locale = Locale(array->at(i).to_object().at("locale").to_object());
			if(
				 (country == locale.country()) &&
				 (state == locale.state())
				 ){
				u32 offset = result.find(locale);
				if( offset == result.count() ){
					result.push_back(locale);
				} else if(
									(locale.latitude() != "null") &&
									(result.at(offset).latitude() == "null") ){
					result.at(offset) = locale;
				}
			}
		}
	}
	return result;
}

Vector<Locale> Importer::build_locale_list() const{
	Vector<Locale> result;
	for(const auto * array: m_json_array_data){
		for(u32 i=0; i < array->count(); i++){
			Locale locale = Locale(array->at(i).to_object().at("locale").to_object());
			u32 offset = result.find(locale);
			if( offset == result.count() ){
				result.push_back(locale);
			} else if( (locale.latitude() != "null") &&
								 (result.at(offset).latitude() == "null") ){
				result.at(offset) = locale;
			}
		}

	}
	return result;
}



