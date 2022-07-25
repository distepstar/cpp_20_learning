#include "cat.h"

Cat::Cat(std::string_view fur_style, std::string_view desc)
    : Feline(fur_style, desc) {}
Cat::~Cat() { std::cout << "Destructor called from Cat\n"; }

void Cat::miaw() const {
  std::cout << "Cat::miaw() called for cat " << m_desc << "\n";
}
void Cat::run() const {
  std::cout << "Cat::run called for: " << m_desc << "\n";
}
