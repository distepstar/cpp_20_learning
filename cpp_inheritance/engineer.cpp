
#include "engineer.h"
#include "person.h"

#include <iostream>

Engineer::Engineer() { std::cout << "Engineer constructor is calling\n"; }

// Initializer lists
Engineer::Engineer(const std::string &fullname, int age,
                   const std::string address, int contract_count_param)
    : Person(fullname, age, address), contract_count(contract_count_param) {}

// Copy constructor
Engineer::Engineer(const Engineer &engineer)
    : Person(engineer), contract_count(engineer.contract_count) {}

std::ostream &operator<<(std::ostream &out, const Engineer &operand) {
  out << "Engineer: [ Full name: " << operand.get_full_name()
      << ", age: " << operand.get_m_age()
      << ", address: " << operand.get_m_address()
      << ", practice certificate id: " << operand.get_contract_count()
      << " ]\n";
  return out;
}

void Engineer::build_something() {
  // still work in derived class -> private in this class
  m_full_name = "John Snow"; // protected
  m_age = 23;                // OK
  // m_address = "None"; // Compiler error -> private in base class
}

// getter
int Engineer::get_contract_count() const { return contract_count; }
// setter
void Engineer::set_contract_count(int contract_count_param) {
  contract_count = contract_count_param;
}

Engineer::~Engineer() { std::cout << "Destructor called from Engineer\n"; }
