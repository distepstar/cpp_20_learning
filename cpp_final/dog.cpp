#include "dog.h"

Dog::Dog(std::string_view fur_style, std::string_view description)
    : Feline(fur_style, description) {}

Dog::~Dog() { std::cout << "Destructor called from Dog\n"; }

void Dog::run() const {

  std::cout << "Dog::run called for: " << m_desc << "\n";
}

void Dog::bark() const {

  std::cout << "Dog::bark called for: " << m_desc << " Woof!\n";
}
