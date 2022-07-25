#include "oval.h"
#include "library.h"

Oval::Oval(double x_radius, double y_radius, const std::string_view description)
    : Shape(description), m_x_radius(x_radius), m_y_radius(y_radius) {}

Oval::Oval(const Oval &oval)
    : Shape(oval.description), m_x_radius(oval.m_x_radius),
      m_y_radius(oval.m_x_radius) {}

Oval::~Oval() { std::cout << "Oval destructor called\n"; }

// Methods
void Oval::draw() const { std::cout << "Draw called from Oval\n"; }

void Oval::draw(int color_depth) const {
  std::cout << "Draw called from Oval with color depth " << color_depth << "\n";
}

double Oval::get_x_rad() const { return m_x_radius; }

double Oval::get_y_rad() const { return m_y_radius; }
