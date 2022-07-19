#include "person.h"
#include <iostream>

// Variable : Declaration and definition
double weight{};

double add(double a, double b);

struct Point {
  double m_x;
  double m_y;
};

int main(int argc, char **argv) {

  Point p1;
  Person person1("John Snow", 35);
  person1.print_info();

  std::cout << "p1.x: " << p1.m_x << " p1.y: " << p1.m_y << std::endl;

  // One Definition rule
  double result = add(10, 30);
  std::cout << "result: " << result << std::endl;

  return 0;
}

double add(double a, double b) { return a + b; }

int Person::person_count = 0;

Person::Person(const std::string &names_param, int age_param)
    : full_name{names_param}, age{age_param} {
  ++person_count;
}
