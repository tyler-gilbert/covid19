#ifndef LOCALE_HPP
#define LOCALE_HPP

#include "Container.hpp"

class Locale : public Container {
public:
	Locale(){}

	Locale(const JsonObject & object){
		m_country = object.at("country").to_string();
		m_state = object.at("state").to_string();
		m_county = object.at("county").to_string();
		m_latitude = object.at("latitude").to_string();
		m_longitude = object.at("longitude").to_string();
		m_land_area = object.at("landArea").to_float();
	}

	bool operator == (const Locale & locale) const {
		return (locale.country() == country()) &&
				(locale.state() == state()) &&
				(locale.county() == county());
	}

	Locale& set_state(const String& value){
		m_state = deabbreviate_state(
					sanitize(value)
					);
		return *this;
	}

	Locale& set_county(const String& value){
		m_county = sanitize(value);
		m_county.
				erase("County");

		if( m_county == "NewYorkCity" ){
			m_county = "NewYork";
		}

		return *this;
	}

	Locale& set_country(const String& value){
		m_country = deabbreviate_country(sanitize(value));
		if( m_country == "UnitedKingdom" ){
			if( (state() == "null") || (state() == "UK") || state().is_empty() ){
				m_state = "UnitedKingdom";
			}
		}
		return *this;
	}

	Locale& set_latitude(const String& value){
		m_latitude = sanitize(value);
		return *this;
	}

	Locale& set_longitude(const String& value){
		m_longitude = sanitize(value);
		return *this;
	}

	Locale& set_land_area(float value){
		m_land_area = value;
		return *this;
	}

	float land_area() const {
		return m_land_area;
	}

	const var::String& country() const {
		return m_country;
	}
	const var::String& state() const {
		return m_state;
	}

	const var::String& county() const {
		return m_county;
	}

	const var::String& latitude() const {
		return m_latitude;
	}

	const var::String& longitude() const {
		return m_longitude;
	}

	JsonObject to_object() const {
		JsonObject result;
		insert_key_value(result, "county", m_county);
		insert_key_value(result, "state", m_state);
		insert_key_value(result, "country", m_country);
		insert_key_value(result, "latitude", m_latitude);
		insert_key_value(result, "longitude", m_longitude);
		result.insert("landArea", JsonReal(m_land_area));
		return result;
	}

private:
	String m_county = "null";
	String m_country = "null";
	String m_state = "null";
	String m_latitude	= "null";
	String m_longitude	= "null";
	float m_land_area = 1.0f;

	String deabbreviate_state(const String & abbr);
	String deabbreviate_country(const String & abbr);

	void insert_key_value(
			JsonObject & object,
			const String & key,
			const String & value
			) const {
		if( value == "(null)" ){
			object.insert(key, JsonNull());
		} else {
			object.insert(key, JsonString(value));
		}
	}

	String sanitize(const String & value){
		String result = value;
		return result
				.replace(String::ToErase("\""), String::ToInsert(""))
				.replace(String::ToErase(" "), String::ToInsert(""));
	}

};

#endif // LOCALE_HPP