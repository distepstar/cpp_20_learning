#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
  friend std::ostream &operator<<(std::ostream &out, const Person &person);

public:
  Person();
  Person(std::string first_name_param, std::string last_name_param);
  Person(std::string full_name_param, int m_age_param,
         std::string address_param);
  Person(const Person &person);
  ~Person();

  // Getters
  std::string get_first_name() const;

  std::string get_last_name() const;

  std::string get_full_name() const;
  int get_m_age() const;
  std::string get_m_address() const;

  // Setters
  void set_first_name(std::string first_name_param);
  void set_last_name(std::string last_name_param);
  void set_full_name(std::string full_name_param);
  void set_m_age(int m_age_param);
  void set_m_addess(std::string address_param);

public:
  std::string m_full_name{"None"};

protected:
  int m_age{0};

private:
  std::string first_name{"Mysterious"};
  std::string last_name{"Person"};
  std::string m_address{"None"};
};

#endif // !PERSON_H
