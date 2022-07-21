#include "person.h"

// Getters
// need to add const to be able to call by subclasses
std::string Person::get_first_name() const { return first_name; }

std::string Person::get_last_name() const { return last_name; }

// Setters
void Person::set_first_name(std::string first_name_param) {
  first_name = first_name_param;
}

void Person::set_last_name(std::string last_name_param) {
  last_name = last_name_param;
}

Person::Person(std::string first_name_param, std::string last_name_param) {
  first_name = first_name_param;
  last_name = last_name_param;
}
Person::~Person() {}
