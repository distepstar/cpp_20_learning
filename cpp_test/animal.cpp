#include "animal.h"

Animal::Animal(std::string_view animal_name, std::string_view animal_color)

    : m_animal_name(animal_name), m_animal_color(animal_color) {}
Animal::~Animal() { std::cout << "Animal destructor\n"; }

void Animal::run() const {
  std::cout << "Aniaml::run() called for: " << m_animal_name << "\n";
}
