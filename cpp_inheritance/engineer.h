#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"
#include <ostream>

// public -> private, protected -> private, private -> private

class Person; // Forward declaration -> resurrecting
class Engineer : private Person {
  friend std::ostream &operator<<(std::ostream &out, const Engineer &operand);
  // Using the base constructor
  using Person::Person;

public:
  Engineer();

  Engineer(const std::string &fullname, int age, const std::string address,
           int contract_count_param);

  // Copy constructor
  Engineer(const Engineer &engineer);

  ~Engineer();
  void build_something();
  // getter
  int get_contract_count() const;
  // setter
  void set_contract_count(int contract_count_param);
  using Person::m_full_name;
  // using Person::m_address; -> Compiler error
  // you cant resurrect something that is private in the base class

protected:
  using Person::get_full_name;
  using Person::get_m_address;
  using Person::get_m_age;

private:
  int contract_count{0};
};

#endif // !ENGINEER_H
