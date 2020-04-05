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
		if( m_latitude == "null" ){
			m_is_location_included = false;
		} else {
			m_is_location_included = true;
		}
	}

	bool operator == (const Locale & locale) const {
		return (locale.country() == country()) &&
				(locale.state() == state()) &&
				(locale.county() == county());
	}

	bool is_world() const {
		return country() == "null";
	}

	bool is_country() const {
		return country() != "null" && state() == "null";
	}

	bool is_state() const {
		return country() != "null" && state() != "null" && county() == "null";
	}

	bool is_county() const {
		return country() != "null" && state() != "null" && county() != "null";
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

		m_county.
				erase("Parish");

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
		if( m_is_location_included == false && m_longitude == "null" ){
			m_longitude = String::number(m_position_sum.at(0) / m_position_count);
		}
		return m_latitude;
	}

	const var::String& longitude() const {
		if( m_is_location_included == false && m_longitude == "null" ){
			m_longitude = String::number(m_position_sum.at(1) / m_position_count);
		}
		return m_longitude;
	}

	Locale& operator += (const Locale & a){
		m_land_area += a.land_area();

		if( m_is_location_included == false && a.latitude() != "null" ){
				m_position_sum.at(0) = a.latitude().to_float();
				m_position_sum.at(1) = a.longitude().to_float();
				m_position_count++;
		}

		return *this;
	}

	String description() const {
		if( county() != "null" ){
			return county() + ", " + state() + ", " + country();
		} else if( state() != "null" ){
			return state() + ", " + country();
		} else if( country() != "null" ){
			return country();
		} else {
			return "World";
		}
	}

	String output_file_base_name() const {
		String result;
		if( county() != "null" ){
			result = "world/" +
					String(country()).to_lower() +
					"/" +
					String(state()).to_lower() +
					"/" +
					String(county()).to_lower();
		} else if( state() != "null" ){
			result = "world/" +
					String(country()).to_lower() +
					"/" +
					String(state()).to_lower();
		} else if( country() != "null" ){
			result = "world/" + String(country()).to_lower();
		} else {
			result = "world/world";
		}
		result.replace(
					String::ToErase("."),
					String::ToInsert("_")
					);
		return result;
	}

	String child_name() const {
		if( is_country() ){
			if( (country() == "UnitedStates") || (country() == "Canada") ){
				return "State";
			} else if( country() == "UnitedKingdom" ){
				return "Territory";
			} else {
				return "Province";
			}
		} else if( is_state() ){
			if(country() == "UnitedStates"){
				return "County";
			} else {
				return "Municipal";
			}
		} else if( is_world() ){
			return "Country";
		}
		return "null";
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
	mutable String m_latitude	= "null";
	mutable String m_longitude	= "null";
	float m_land_area = 1.0f;
	bool m_is_location_included;
	Array<float, 2> m_position_sum;
	u32 m_position_count;

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
				.replace(String::ToErase("."), String::ToInsert(""))
				.replace(String::ToErase("\""), String::ToInsert(""))
				.replace(String::ToErase(" "), String::ToInsert(""));
	}

};

#endif // LOCALE_HPP
