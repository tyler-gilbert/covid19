#ifndef COVID19_HPP
#define COVID19_HPP

#include "Container.hpp"

class Covid19 : public Container {
public:
	Covid19(){}
	Covid19(const JsonObject & object){
		m_confirmed = object.at("confirmed").to_integer();
		m_deaths = object.at("deaths").to_integer();
		m_recovered = object.at("recovered").to_integer();
		m_timestamp = object.at("timestamp").to_string();
	}

	Covid19& set_confirmed(u32 value){
		m_confirmed = value;
		return *this;
	}

	Covid19& set_deaths(u32 value){
		m_deaths = value;
		return *this;
	}

	Covid19& set_recovered(u32 value){
		m_recovered = value;
		return *this;
	}

	Covid19& set_timestamp(const String& value){
		m_timestamp = parse_date(value);
		return *this;
	}

	u32 confirmed() const {
		return m_confirmed;
	}

	u32 deaths() const {
		return m_deaths;
	}

	u32 recovered() const {
		return m_recovered;
	}

	String timestamp() const {
		return m_timestamp;
	}

	String timestamp_alternate() const {
		StringList tmp = m_timestamp.split("-");
		return tmp.at(1) + "-" + tmp.at(2) + "-" + tmp.at(0);
	}

	JsonObject to_object() const {
		JsonObject result;
		result.insert("confirmed", JsonInteger(m_confirmed));
		result.insert("deaths", JsonInteger(m_deaths));
		result.insert("recovered", JsonInteger(m_recovered));
		result.insert("timestamp", JsonString(m_timestamp));
		return result;
	}

	bool is_synchronous(const Covid19& value){
		return timestamp() == value.timestamp();
	}

	bool operator < (const Covid19& value) const {
		return timestamp() < value.timestamp();
	}

	bool operator > (const Covid19& value) const {
		return timestamp() > value.timestamp();
	}

	bool operator == (const Covid19& value) const {
		return timestamp() == value.timestamp();
	}

	bool operator != (const Covid19& value) const {
		return timestamp() != value.timestamp();
	}

	Covid19& operator += (const Covid19& value){
		if( timestamp() == value.timestamp() ){
			m_confirmed += value.confirmed();
			m_deaths += value.deaths();
			m_recovered += value.recovered();
		}
		return *this;
	}



private:
	u32 m_confirmed = 0;
	u32 m_deaths = 0;
	u32 m_recovered = 0;
	String m_timestamp;

	String parse_date(const String & last_update);


};

class Covid19List {
public:

	Covid19List(){}
	Covid19List(const JsonArray & array){
		for(u32 i=0; i < array.count(); i++){
			m_data.push_back(
						Covid19(array.at(i).to_object())
						);
		}
	}

	Vector<Array<float, 3>> calculate_daily_percent_increase() const;
	Vector<Array<float, 3>> calculate_increment_period(float factor) const;

	Vector<Covid19>& data(){ return m_data; }
	const Vector<Covid19>& data() const { return m_data; }

	Covid19List& operator += (const Covid19List& a){
		//add every point in this to every point in a
		//only matching timestamps will actually be added together
		for(const auto & rhs: a.data()){
			bool is_summed = false;
			for(auto & lhs: data()){
				if( lhs.timestamp() == rhs.timestamp() ){
					is_summed = true;
					lhs += rhs;
				}
			}
			if( is_summed == false ){
				data().push_back(rhs);
			}
		}
		return *this;
	}

	JsonArray to_array() const {
		JsonArray result;
		for(const auto & sample: data()){
			result.append(sample.to_object());
		}
		return result;
	}

private:
	Vector<Covid19> m_data;


};

#endif // COVID19_HPP
