#include "feline.h"

Feline::Feline(std::string_view fur_style, std::string_view description)
    : Animal(description), m_fur_style(fur_style) {}

Feline::~Feline() { std::cout << "Destructor called from Feline\n"; }

void Feline::run() const {
  std::cout << "Feline::run called for: " << m_desc << "\n";
}
