#ifndef FACTBOOK_HPP
#define FACTBOOK_HPP

#include "Container.hpp"
#include "Locale.hpp"

class FactbookValue : public Container {
public:
	FactbookValue(){}
	FactbookValue(const JsonObject & object){
		m_name = object.at("name").to_string();
		//m_country = object.at("country").to_string();
		m_position = object.at("position").to_string();
		m_category = object.at("category").to_string();
		m_value = object.at("value").to_string();
	}

	JsonObject to_object() const {
		JsonObject result;
		result.insert("category", JsonString(category()));
		result.insert("name", JsonString(name()));
		//result.insert("country", JsonString(country()));
		result.insert("position", JsonString(position()));
		result.insert("value", JsonString(value()));
		return result;
	}


	FactbookValue& set_category(
			const String& value
			){
		m_category = value;
		return *this;
	}

	FactbookValue& set_position(
			const String& value
			){
		m_position = value;
		return *this;
	}

	FactbookValue& set_country(
			const String& value
			){
		m_country = value;
		return *this;
	}

	FactbookValue& set_name(
			const String& value
			){
		m_name = value;
		return *this;
	}

	FactbookValue& set_value(
			const String& value
			){
		m_value = value;
		return *this;
	}


	const String& position() const {
		return m_position;
	}


	const String& country() const {
		return m_country;
	}

	const String& name() const {
		return m_name;
	}

	const String& value() const {
		return m_value;
	}

	const String& category() const {
		return m_category;
	}

	bool operator == (const FactbookValue& value) const {
		return name() == value.name();
	}

private:
	String m_category;
	String m_position;
	String m_country;
	String m_name;
	String m_value;
};

class FactbookCategory : public Container {
public:
	FactbookCategory(){}

	FactbookCategory& set_number(
			const String& value
			){
		m_number = value;
		return *this;
	}

	FactbookCategory& set_category(
			const String& value
			){
		m_category = value;
		return *this;
	}

	FactbookCategory& set_name(
			const String& value
			){
		m_name = value;
		return *this;
	}

	const String& number() const {
		return m_number;
	}

	const String& category() const {
		return m_category;
	}

	const String& name() const {
		return m_name;
	}

private:
	String m_number;
	String m_category;
	String m_name;
};

class Factbook : public Container {
public:
	Factbook();
	Factbook(
			const String& country
			){
		m_locale.set_country(country);
	}

	Factbook(
			const String& country,
			const Vector<FactbookValue> & value_list
			){
		m_locale.set_country(country);
		for(const FactbookValue & value: value_list){
			if( value.country() == country ){
				m_values.push_back(value);
			}
		}
	}

	Factbook(const Locale& locale, const JsonArray & array) :
		m_locale(locale){
		for(u32 i=0; i < array.count(); i++){
			m_values.push_back(
						FactbookValue(array.at(i).to_object())
						);
		}
	}

	Factbook(const JsonObject & object) :
		m_locale(object.at("locale").to_object()){
		JsonArray value_array = object.at("factbook").to_array();
		for(u32 i=0; i < value_array.count(); i++){
			m_values.push_back(
						FactbookValue(value_array.at(i).to_object())
						);
		}
	}

	JsonObject to_object() const {
		JsonObject result;
		result.insert("locale", locale().to_object());
		result.insert("factbook", to_array());
		return result;
	}

	JsonArray to_array() const {
		JsonArray result;
		for(const FactbookValue& value: value_list()){
			result.append(value.to_object());
		}
		return result;
	}

	bool is_valid() const {
		return m_values.count() > 0;
	}

	const Locale& locale() const { return m_locale; }
	const Vector<FactbookValue>& value_list() const {
		return m_values;
	}

	bool operator == (const Factbook& value) const {
		return locale().country() == value.locale().country();
	}

	float calculate_population_density() const;

	u32 population() const {
		return find_value("Population").to_integer();
	}

	u32 land_area() const {
		//returns square miles
		return find_value("Area").to_integer() * 0.3861022f;
	}

	static float square_miles_to_square_kilometers(float value){
		return value / 0.3861022f;
	}

private:
	Locale m_locale;
	Vector<FactbookValue> m_values;

	const String& find_value(const String& category_name) const {
		u32 offset = m_values.find(
					FactbookValue().set_name(category_name)
					);
		if( offset == m_values.count() ){
			return String::empty_string();
		}
		return m_values.at(offset).value();
	}

};

class WorldFactbook : public Container {
public:
	WorldFactbook(){}
	WorldFactbook(const JsonArray & array){
		for(u32 i=0; i < array.count(); i++){
			m_factbook_list.push_back(
						Factbook(array.at(i).to_object())
						);
		}
	}

	bool is_factbook_available(const String& locale_country) const {
		return m_factbook_list.find(Factbook(locale_country)) <
				m_factbook_list.count();
	}

	const Factbook& factbook(const String& locale_country) const {
		u32 offset = m_factbook_list.find(Factbook(locale_country));
		if( offset == m_factbook_list.count() ){
			return m_empty_factbook;
		}
		return m_factbook_list.at(offset);
	}

	const Vector<Factbook>& list() const { return m_factbook_list; }
	Vector<Factbook>& list(){ return m_factbook_list; }

private:
	Vector<Factbook> m_factbook_list;
	static Factbook m_empty_factbook;

};


#endif // FACTBOOK_HPP
