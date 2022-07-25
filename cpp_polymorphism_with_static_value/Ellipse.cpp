#include "Ellipse.h"

int Ellipse::m_count{0};

Ellipse::Ellipse() { ++m_count; }

Ellipse::Ellipse(double x_rad, double y_rad, const std::string &desc)
    : Shape(desc), m_x_rad(x_rad), m_y_rad(y_rad) {
  ++m_count;
}

Ellipse::~Ellipse() {
  std::cout << "Destructor called from Ellipse\n";
  --m_count;
}

int Ellipse::get_count() const { return m_count; }
