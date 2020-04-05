#ifndef IMPORTER_HPP
#define IMPORTER_HPP

#include <sapi/var.hpp>
#include <sapi/chrono.hpp>

#include "Object.hpp"
#include "Locale.hpp"
#include "Covid19.hpp"
#include "Population.hpp"
#include "Factbook.hpp"

class Importer : public Object {
public:
	Importer();

	void execute();

private:
	//not bering used yet
	struct Covid19Locale {
		Covid19Locale(
				const Locale & locale,
				const Covid19 & covid19) :
			m_locale(locale),
			m_covid19(covid19){

		}

		const Covid19 & covid19(){ return m_covid19; }
		const Locale & locale(){ return m_locale; }
	private:
		Covid19 m_covid19;
		Locale m_locale;
	};

	bool m_is_load_compilation;
	String m_input_directory_path;
	String m_output_directory_path;
	String m_intermediate_directory_path;
	JsonArray m_land_area_array;
	JsonArray m_population_array;
	JsonArray m_covid19_array;
	JsonArray m_compilation_array;
	WorldFactbook m_world_factbook;

	Vector<JsonArray*> m_json_array_data;
	bool m_is_process_land_area;
	bool m_is_process_population;
	bool m_is_process_covid19;

	void load_options();
	void process_land_area_data();
	void process_population_data();
	void process_covid19_data();
	void process_covid19_daily_report(const String& file_path);
	void process_factbook();
	void create_compilation_output();
	void create_world_output();

	bool is_filter_covid19(const Locale& locale) const;

	StringList build_country_list() const;
	StringList build_factbook_country_list(const Vector<FactbookValue> & value_list) const;
	Vector<Locale> build_locale_list(const var::String & country, const String& state);
	Vector<Locale> build_locale_list() const;

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

	Vector<FactbookCategory> load_factbook_categories(
			const var::String & category_file_path
			);

	Vector<FactbookValue> load_factbook_values(
			const var::String & category,
			const var::String & name,
			const var::String & value_file_path
			);

};

#endif // IMPORTER_HPP
