#include "person.h"

Person::Person() { std::cout << "Person constructor is calling\n"; }

Person::Person(std::string full_name_param, int m_age_param,
               std::string address_param) {
  m_full_name = full_name_param;
  m_age = m_age_param;
  m_address = address_param;
}

Person::Person(const Person &person)
    : m_full_name(person.m_full_name), m_age(person.m_age),
      m_address(person.m_address) {}

std::ostream &operator<<(std::ostream &out, const Person &person) {
  out << "Person: ["
      << " names: " << person.get_first_name() << " " << person.get_last_name()
      << "]\n";
  return out;
}
// Getters
// need to add const to be able to call by subclasses
std::string Person::get_first_name() const { return first_name; }
std::string Person::get_last_name() const { return last_name; }
std::string Person::get_full_name() const { return m_full_name; }
int Person::get_m_age() const { return m_age; };
std::string Person::get_m_address() const { return m_address; }

// Setters
void Person::set_first_name(std::string first_name_param) {
  first_name = first_name_param;
}

void Person::set_last_name(std::string last_name_param) {
  last_name = last_name_param;
}

void Person::set_full_name(std::string full_name_param) {
  m_full_name = full_name_param;
}

void Person::set_m_age(int m_age_param) { m_age = m_age_param; }

Person::Person(std::string first_name_param, std::string last_name_param) {
  first_name = first_name_param;
  last_name = last_name_param;
}
Person::~Person() { std::cout << "Destructor called from Person\n"; }
