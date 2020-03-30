#ifndef CHARTJS_HPP
#define CHARTJS_HPP

#include <sapi/var/Json.hpp>


class ChartJsColor {
public:
	ChartJsColor(
			){

	}

	ChartJsColor& set_red(u8 value){
		m_red = value;
		return *this;
	}

	ChartJsColor& set_green(u8 value){
		m_green = value;
		return *this;
	}

	ChartJsColor& set_blue(u8 value){
		m_blue = value;
		return *this;
	}

	ChartJsColor& set_alpha(u8 value){
		m_alpha = value;
		return *this;
	}

	var::String to_string() const {
		return var::String().format(
					"rgba(%d,%d,%d,%d)",
					m_red,
					m_green,
					m_blue,
					m_alpha
					);
	}

	static ChartJsColor create_red(){
		return ChartJsColor()
				.set_red(255)
				.set_green(0)
				.set_blue(0)
				.set_alpha(255);
	}

	static ChartJsColor create_green(){
		return ChartJsColor()
				.set_red(0)
				.set_green(255)
				.set_blue(0)
				.set_alpha(255);
	}

	static ChartJsColor create_blue(){
		return ChartJsColor()
				.set_red(0)
				.set_green(0)
				.set_blue(255)
				.set_alpha(255);
	}

	static ChartJsColor create_transparent(){
		return ChartJsColor()
				.set_alpha(0);
	}

	static ChartJsColor create_white(){
		return ChartJsColor();
	}

	static ChartJsColor create_black(){
		return ChartJsColor()
				.set_red(0)
				.set_green(0)
				.set_blue(0)
				.set_alpha(255);
	}


private:
	u8 m_red = 0xff;
	u8 m_green = 0xff;
	u8 m_blue = 0xff;
	u8 m_alpha = 0xff;
};

class ChartJsDataSet {
public:
	ChartJsDataSet(){}

	enum type {
		type_string,
		type_real
	};

	ChartJsDataSet& set_property(
			const var::String & key,
			const var::JsonValue & value
			){
		m_properties.insert(key, value);
		return *this;
	}

	ChartJsDataSet& set_type(enum type value){
		m_type = value;
		return *this;
	}

	ChartJsDataSet& append(const var::String & value){
		data().push_back(value);
		return *this;
	}

	var::JsonObject to_object() const {
		var::JsonObject result;
		result.copy(m_properties);
		if (m_type == type_string){
			result.insert(
						"data",
						var::JsonArray(m_data)
						);
		} else {
			var::JsonArray data_array;
			for(const auto & data: m_data){
				data_array.append(var::JsonReal(data.to_float()));
			}
			result.insert(
						"data",
						data_array
						);
		}
		return result;
	}

	var::Vector<var::String>& data(){ return m_data; }
	const var::Vector<var::String>& data() const { return m_data; }


private:
	enum type m_type = type_string;
	var::JsonObject m_properties;
	var::Vector<var::String> m_data;
};

class ChartJsData {
public:
	ChartJsData(){}

	ChartJsData& append(const ChartJsDataSet& data_set){
		m_dataset_list.push_back(data_set);
		return *this;
	}

	var::JsonObject to_object() const {
		var::JsonObject result;
		result.insert(
					"labels",
					var::JsonArray(m_labels)
					);
		var::JsonArray dataset_array;
		for(const auto & dataset: m_dataset_list){
			dataset_array.append(dataset.to_object());
		}
		result.insert(
					"datasets",
					dataset_array
					);
		return result;
	}

	var::StringList& labels(){ return m_labels; }
	const var::StringList& labels() const { return m_labels; }


private:
	var::StringList m_labels;
	var::Vector<ChartJsDataSet> m_dataset_list;
};

class ChartJsOptions {
public:
	ChartJsOptions(){}
	var::JsonObject to_object() const {
		var::JsonObject result;
		result.copy(m_value, true);
		return result;
	}

	ChartJsOptions& set_property(
			const var::String & key,
			const var::JsonValue & value
			){
		m_value.insert(key, value);
		return *this;
	}


	ChartJsOptions& set_y_axes(
			const var::JsonArray & array
			){
		var::JsonObject scales_object = m_value.at("scales").to_object();
		scales_object.insert("yAxes", array);
		m_value.insert("scales", scales_object);
		return *this;
	}

	ChartJsOptions& set_x_axes(
			const var::JsonArray & array
			){
		var::JsonObject scales_object = m_value.at("scales").to_object();
		scales_object.insert("xAxes", array);
		m_value.insert("scales", scales_object);
		return *this;
	}

	ChartJsOptions& set_y_axis(
			const var::JsonObject & object
			){
		var::JsonArray array;
		array.append(object);
		set_y_axes(array);
		return *this;
	}

	ChartJsOptions& set_x_axis(
			const var::JsonObject & object
			){
		var::JsonArray array;
		array.append(object);
		set_x_axes(array);
		return *this;
	}

	static var::JsonObject create_title(const var::String & text){
		var::JsonObject result;
		result.insert("display", var::JsonTrue());
		result.insert("text", var::JsonString(text));
		return result;
	}

	static var::JsonObject create_axis(const var::String & type){
		var::JsonObject result;
		result.insert("display", var::JsonTrue());
		result.insert("type", var::JsonString(type));
		return result;
	}



private:
	var::JsonObject m_value;


};

class ChartJs {
public:
	ChartJs();

	enum type {
		type_line,
		type_bar,
		type_doughnut,
		type_pie,
		type_radar
	};

	ChartJs& set_type(enum type value){
		m_type = value;
		return *this;
	}

	var::JsonObject to_object() const {
		var::JsonObject result;
		result.insert("type",
									var::JsonString( convert_type_to_string(m_type) )
									);

		result.insert(
					"options",
					options().to_object()
					);

		result.insert(
					"data",
					data().to_object()
					);

		return result;
	}

	ChartJsData& data(){ return m_data; }
	const ChartJsData& data() const { return m_data; }

	ChartJsOptions& options(){ return m_options; }
	const ChartJsOptions& options() const { return m_options; }

private:
	enum type m_type;
	ChartJsData m_data;
	ChartJsOptions m_options;

	static var::String convert_type_to_string(enum type value);

};

#endif // CHARTJS_HPP
