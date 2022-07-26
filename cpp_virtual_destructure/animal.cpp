#include "animal.h"

Animal::Animal(const std::string &desc) : m_desc(desc) {}
Animal::~Animal() { std::cout << "Destructor called from Animal\n"; }
void Animal::breathe() const {
  std::cout << "Animal::breath() called for the " << m_desc << "\n";
}
