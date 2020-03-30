#ifndef IMPORTER_HPP
#define IMPORTER_HPP

#include <sapi/var.hpp>
#include <sapi/chrono.hpp>

#include "Object.hpp"
#include "Locale.hpp"
#include "Covid19.hpp"
#include "Population.hpp"

class Importer : public Object {
public:
	Importer();

	void execute();

private:
	String m_input_directory_path;
	String m_output_directory_path;
	String m_intermediate_directory_path;
	JsonArray m_land_area_array;
	JsonArray m_population_array;
	JsonArray m_covid19_array;
	Vector<JsonArray*> m_json_array_data;
	bool m_is_process_land_area;
	bool m_is_process_population;
	bool m_is_process_covid19;

	void load_options();
	void process_land_area_data();
	void process_population_data();
	void process_covid19_data();
	void process_covid19_daily_report(const String& file_path);
	void create_output_compilations();

	void create_country_output(const String& country);
	void create_country_with_states_compilations(const String& country);
	void create_state_output(const String& country, const String& state);
	StringList build_country_list() const;
	StringList build_state_list(const var::String & country) const;
	StringList build_timestamp_list(const JsonArray & state_array);
	Vector<Locale> build_locale_list(const var::String & country, const String& state);
	Vector<Locale> build_country_list();

	String sanitize(const String & value){
		String result = value;
		return result
				.replace(String::ToErase("\""), String::ToInsert(""))
				.replace(String::ToErase(" "), String::ToInsert(""));
	}

	u32 convert_csv_column(const var::String & value);
	u32 convert_csv_column_character(char c);

	void insert_key_value(
			JsonObject & object,
			const String & key,
			const String & value
			){
		if( value == "(null)" ){
			object.insert(key, JsonNull());
		} else {
			object.insert(key, JsonString(value));
		}
	}



	JsonObject find_locale(
			const JsonArray & array,
			const Locale & locale
			);

	Population create_population(
			const Vector<String> & row,
			u32 total_column,
			u32 minimum_age,
			u32 maximum_age
			);


};

#endif // IMPORTER_HPP
