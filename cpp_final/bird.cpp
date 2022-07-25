#include "bird.h"

Bird::Bird(std::string_view wing_color, std::string_view desc)
    : Animal(desc), m_wing_color(wing_color) {}
Bird::~Bird() { std::cout << "Destructor called from Bird\n"; }

void Bird::fly() const {
  std::cout << "Bird:fly() called for bird: " << m_desc << "\n";
}
