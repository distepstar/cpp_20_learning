#include "animal.h"

Animal::Animal(std::string_view desc) : m_desc(desc) {}
Animal::~Animal() { std::cout << "Destructor called from Animal\n"; }

void Animal::breathe() const {
  std::cout << "Animal::breathe called for: " << m_desc << "\n";
}

// default value parameter
// auto Animal::add(double a, double b) const {
//   struct result {
//     double sum;
//     double a;
//     double b;
//   };
//   return result{(a + b), a, b};
// }
