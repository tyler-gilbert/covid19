#ifndef POPULATION_HPP
#define POPULATION_HPP

#include "Container.hpp"

class Population: public Container {
public:

	static u32 absolute_maximum_age(){
		return 1000;
	}

	Population();
	Population(const JsonObject & object){
		m_total = object.at("total").to_integer();
		m_male = object.at("male").to_integer();
		m_female = object.at("female").to_integer();
		m_minimum_age = object.at("minimumAge").to_integer();
		m_maximum_age = object.at("maximumAge").to_integer();
		if( m_maximum_age == 0 ){
			m_maximum_age = absolute_maximum_age();
		}
	}

	JsonObject to_object() const {
		JsonObject result;
		result.insert("total", JsonInteger(total()));
		result.insert("male", JsonInteger(male()));
		result.insert("female", JsonInteger(female()));
		result.insert("minimumAge", JsonInteger(minimum_age()));
		result.insert("maximumAge", JsonInteger(maximum_age()));
		return result;
	}

	Population& set_total(u32 value){
		m_total = value;
		return *this;
	}

	Population& set_male(u32 value){
		m_male = value;
		return *this;
	}

	Population& set_female(u32 value){
		m_female = value;
		return *this;
	}

	Population& set_minimum_age(u32 value){
		m_minimum_age = value;
		return *this;
	}

	Population& set_maximum_age(u32 value){
		m_maximum_age = value;
		return *this;
	}

	u32 total() const {
		return m_total;
	}

	u32 male() const {
		return m_male;
	}

	u32 female() const {
		return m_female;
	}

	u32 minimum_age() const {
		return m_minimum_age;
	}

	u32 maximum_age() const {
		return m_maximum_age;
	}

	float male_ratio() const {
		return m_male / m_total;
	}

	float female_ratio() const {
		return m_female / m_total;
	}

	Population& operator +=(const Population& value){
		if( (minimum_age() == value.minimum_age()) &&
				(maximum_age() == value.maximum_age()) ){
			m_total += value.total();
			m_male += value.male();
			m_female += value.female();
		}
		return *this;
	}

private:
	u32 m_total = 0;
	u32 m_male = 0;
	u32 m_female = 0;
	u32 m_minimum_age = 0;
	u32 m_maximum_age = 0;

};

class PopulationGroup {
public:

	PopulationGroup(){
		create_age_brackets();

		m_total
				.set_minimum_age(0)
				.set_maximum_age(Population::absolute_maximum_age());
	}

	PopulationGroup(const JsonObject & object) :
		m_total(object.at("total").to_object()){
		JsonArray by_age_array = object.at("byAge").to_array();
		if( by_age_array.count() > 0 ){
			for(u32 i=0; i < by_age_array.count(); i++){
				m_by_age_list.push_back(
							Population(by_age_array.at(i).to_object())
							);
			}
		} else {
			create_age_brackets();
		}
	}

	JsonObject to_object() const {
		JsonObject result;
		result.insert("total", m_total.to_object());
		JsonArray by_age_array;
		for(const auto & by_age: m_by_age_list){
			by_age_array.append(
						by_age.to_object()
						);
		}
		result.insert("byAge", by_age_array);
		return result;
	}

	PopulationGroup& set_total(const Population& value){
		m_total = value;
		return *this;
	}

	PopulationGroup& append_by_age(const Population& value){
		m_by_age_list.push_back(value);
		return *this;
	}

	Population& total(){
		return m_total;
	}

	const Population& total() const {
		return m_total;
	}

	Population& by_age(u32 offset){
		return m_by_age_list.at(offset);
	}

	const Population& by_age(u32 offset) const {
		return m_by_age_list.at(offset);
	}

	u32 by_age_count() const {
		return m_by_age_list.count();
	}

	PopulationGroup& operator +=(const PopulationGroup& value){
		m_total += value.total();
		if( value.by_age_count() == by_age_count() ){
			for(u32 i=0; i < by_age_count(); i++){
				by_age(i) += value.by_age(i);
			}
		}
		return *this;
	}

	float calculate_average_age() const;

private:
	Population m_total;
	Vector<Population> m_by_age_list;

	void create_age_brackets(){
		for(u32 i = 0; i < 90; i+=5){
			u32 max_age = i+5-1;
			if( max_age == 89 ){
				max_age = Population::absolute_maximum_age();
			}
			m_by_age_list.push_back(
						Population()
						.set_minimum_age(i)
						.set_maximum_age(max_age)
						);
		}
	}
};

#endif // POPULATION_HPP
