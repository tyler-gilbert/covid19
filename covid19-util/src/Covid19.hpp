#ifndef COVID19_HPP
#define COVID19_HPP

#include <sapi/chrono.hpp>
#include "Container.hpp"

class Covid19 : public Container {
public:

	enum metric_type {
		metric_type_confirmed,
		metric_type_deaths,
		metric_type_recovered
	};

	Covid19(){}
	Covid19(const JsonObject & object){
		m_confirmed = object.at("confirmed").to_integer();
		m_deaths = object.at("deaths").to_integer();
		m_recovered = object.at("recovered").to_integer();
		m_timestamp = object.at("timestamp").to_string();
	}

	bool is_valid() const {
		return !timestamp().is_empty();
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

	u32 metric(enum metric_type value) const {
		switch(value){
			case metric_type_confirmed: return confirmed();
			case metric_type_recovered: return recovered();
			case metric_type_deaths: return deaths();
		}
		return confirmed();
	}

	static String metric_name(enum metric_type value){
		switch(value){
			case metric_type_confirmed: return "Confirmed";
			case metric_type_recovered: return "Recovered";
			case metric_type_deaths: return "Deaths";
		}
		return "Confirmed";
	}

	static String name_at(u32 offset){
		switch(offset){
			case metric_type_confirmed: return "Confirmed";
			case metric_type_recovered: return "Recovered";
			case metric_type_deaths: return "Deaths";
		}
		return "NA";
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

	u32 at(u32 offset) const {
		switch(offset){
			case 0: return confirmed();
			case 1: return deaths();
			case 2: return recovered();
		}
		return 0;
	}

	String timestamp() const {
		return m_timestamp;
	}

	Time timestamp_time() const {
		return Time(m_timestamp, "%Y-%m-%d");
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

class Covid19Feature {
public:

	Covid19Feature(){}

	Covid19Feature(const JsonObject & object){
		m_name = object.at("name").to_string();
		m_confirmed = object.at("confirmed").to_float();
		m_deaths = object.at("deaths").to_float();
		m_recovered = object.at("recovered").to_float();
	}

	Covid19Feature(const String& name) : m_name(name){}

	Covid19Feature& set_confirmed(float value){
		m_confirmed = value;
		return *this;
	}

	Covid19Feature& set_deaths(float value){
		m_deaths = value;
		return *this;
	}

	Covid19Feature& set_recovered(float value){
		m_recovered = value;
		return *this;
	}

	const String& name() const {
		return m_name;
	}

	float confirmed() const {
		return m_confirmed;
	}

	float deaths() const {
		return m_deaths;
	}

	float recovered() const {
		return m_recovered;
	}

	float at(u32 offset) const {
		switch(offset){
			case Covid19::metric_type_confirmed: return confirmed();
			case Covid19::metric_type_deaths: return deaths();
			case Covid19::metric_type_recovered: return recovered();
		}
		return 0.0f;
	}

	static String name_at(u32 offset){
		return Covid19::name_at(offset);
	}

	JsonObject to_object() const {
		JsonObject result;
		result.insert("name", JsonString(name()));
		result.insert("confirmed", JsonReal(confirmed()));
		result.insert("deaths", JsonReal(deaths()));
		result.insert("recovered", JsonReal(recovered()));
		return result;
	}

private:
	String m_name;
	float m_confirmed = 0.0f;
	float m_deaths = 0.0f;
	float m_recovered = 0.0f;
};

class Covid19List {
public:

	Covid19List(){}
	Covid19List(const JsonArray & array){
		m_data.reserve(array.count());
		for(u32 i=0; i < array.count(); i++){
			m_data.push_back(
						Covid19(array.at(i).to_object())
						);
		}
	}

	u32 total(enum Covid19::metric_type type){
		return data().back().metric(type);
	}

	Vector<Covid19Feature> calculate_daily_percent_increase(float maximum) const;
	Vector<Covid19Feature> calculate_increment_period(
			float factor,
			float max_period
			) const;

	Vector<Covid19>& data(){ return m_data; }
	const Vector<Covid19>& data() const { return m_data; }

	Covid19List& operator += (const Covid19List& a){
		//add every point in this to every point in a
		//only matching timestamps will actually be added together
		u32 count = data().count();
		for(const auto & rhs: a.data()){
			bool is_summed = false;
			for(auto & lhs: data()){
				if( lhs.timestamp() == rhs.timestamp() ){
					is_summed = true;
				}
			}
			if( is_summed == false ){
				count++;
			}
		}

		data().reserve(count);

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

	u32 cummulative(enum Covid19::metric_type type) const {
		if( m_data.count() > 0 ){
			return m_data.back().metric(type);
		}

		return 0;
	}

private:
	Vector<Covid19> m_data;


	float calculate_daily_percent_increase(
			enum Covid19::metric_type value,
			u32 offset
			) const;

};

class Covid19FeatureGroup : public Container {
public:

	enum count {
		count_days_for_10x_growth = 20,
		count_latest_average_growth_rate = 7,
		count_latest_growth_trend = 7
	};

	Covid19FeatureGroup(){}

	Covid19FeatureGroup(const Covid19List & covid19){

		PrinterObject guard(printer(), "FeatureGroup", Printer::level_debug);
		PRINTER_TRACE(printer(), "calc growth rate");
		Vector<Covid19Feature> growth_rate =
				covid19.calculate_daily_percent_increase(2000.0f);

		PRINTER_TRACE(printer(), "calc 10x growth");
		for(u32 i=0; i < m_daily_growth_rate_for_10x.count(); i++){
			auto & feature = m_daily_growth_rate_for_10x.at(i);
			feature = calculate_days_for_10x_growth(
						covid19,
						days_for_10x_growth_initial_value(i)
						);
		}

		PRINTER_TRACE(printer(), "calc growth trend");
		for(u32 i=0; i < m_latest_growth_trend.count(); i++){
			auto & feature = m_latest_growth_trend.at(i);
			feature = calculate_latest_growth_trend(
						growth_rate,
						i
						);
		}

		PRINTER_TRACE(printer(), "calc average growth rate");
		for(u32 i=0; i < m_latest_average_growth_rate.count(); i++){
			auto & feature = m_latest_average_growth_rate.at(i);
			feature = calculate_latest_average_growth_rate(
						growth_rate,
						i
						);
		}
		PRINTER_TRACE(printer(), "done");
	}

	Covid19FeatureGroup(const JsonObject & object){
		{
			JsonArray json_array = object.at("dailyGrowthRateFor10x").to_array();
			for(u32 i=0; i < json_array.count() && i < m_daily_growth_rate_for_10x.count(); i++){
				m_daily_growth_rate_for_10x.at(i) = Covid19Feature(json_array.at(i).to_object());
			}
		}

		{
			JsonArray json_array = object.at("latestAverageGrowthRate").to_array();
			for(u32 i=0; i < json_array.count() && i < m_latest_average_growth_rate.count(); i++){
				m_latest_average_growth_rate.at(i) = Covid19Feature(json_array.at(i).to_object());
			}
		}

		{
			JsonArray json_array = object.at("latestGrowthTrend").to_array();
			for(u32 i=0; i < json_array.count() && i < m_latest_growth_trend.count(); i++){
				m_latest_growth_trend.at(i) = Covid19Feature(json_array.at(i).to_object());
			}
		}

	}


	JsonObject to_object() const {
		JsonObject result;

		{
			JsonArray json_array;
			for(const auto & feature: daily_growth_rate_for_10x()){
				json_array.append(feature.to_object());
			}
			result.insert("dailyGrowthRateFor10x", json_array);
		}

		{
			JsonArray json_array;
			for(const auto & feature: latest_average_growth_rate()){
				json_array.append(feature.to_object());
			}
			result.insert("latestAverageGrowthRate", json_array);
		}

		{
			JsonArray json_array;
			for(const auto & feature: latest_growth_trend()){
				json_array.append(feature.to_object());
			}
			result.insert("latestGrowthTrend", json_array);
		}

		return result;
	}


	static u32 days_for_10x_growth_initial_value(u32 offset){
		if( offset < count_days_for_10x_growth ){
			return (offset + 1)*10;
		}
		return 0;
	}

	const Array<Covid19Feature, count_days_for_10x_growth>& daily_growth_rate_for_10x() const {
		return m_daily_growth_rate_for_10x;
	}

	const Array<Covid19Feature, count_latest_average_growth_rate>& latest_average_growth_rate() const {
		return m_latest_average_growth_rate;
	}

	const Array<Covid19Feature, count_latest_growth_trend>& latest_growth_trend() const {
		return m_latest_growth_trend;
	}

private:

	Array<Covid19Feature, count_days_for_10x_growth> m_daily_growth_rate_for_10x;
	Array<Covid19Feature, count_latest_average_growth_rate> m_latest_average_growth_rate;
	Array<Covid19Feature, count_latest_growth_trend> m_latest_growth_trend;

	Covid19Feature calculate_days_for_10x_growth(
			const Covid19List & covid19,
			u32 starting_count
			);

	Covid19Feature calculate_latest_average_growth_rate(
			const Vector<Covid19Feature>& growth_rate,
			u32 day_count
			);

	Covid19Feature calculate_latest_growth_trend(
			const Vector<Covid19Feature>& growth_rate,
			u32 day_count
			);


};

#endif // COVID19_HPP
