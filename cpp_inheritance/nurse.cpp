#include "nurse.h"
#include "person.h"

#include <iostream>

Nurse::Nurse() { std::cout << "Nurse constructor is calling\n"; }

std::ostream &operator<<(std::ostream &out, const Nurse &operand) {
  out << "Nurse: [ Full name: " << operand.get_full_name()
      << ", age: " << operand.get_m_age()
      << ", address: " << operand.get_m_address()
      << ", practice certificate id: " << operand.get_practice_certificate_id()
      << " ]\n";
  return out;
}

void Nurse::treat_unwell_person() {
  // still work in derived class
  m_full_name = "John Snow"; // protected
  m_age = 23;                // OK
  // m_address = "None"; // Compiler error -> private in base class
}

// getter
int Nurse::get_practice_certificate_id() const {
  return practice_certificate_id;
}
// setter
void Nurse::set_practice_certificate_id(int practice_certificate_id_param) {
  practice_certificate_id = practice_certificate_id_param;
}

Nurse::~Nurse() {}
