#include "circle.h"
#include "library.h"

Circle::Circle(double radius, const std::string_view description)
    : Oval(radius, radius, description), m_radius(radius) {}

Circle::Circle(const Circle &circle)
    : Oval(circle.m_radius, circle.m_radius, circle.description),
      m_radius(circle.m_radius) {}

Circle::~Circle() { std::cout << "Circle destructor called\n"; }

void Circle::draw() const { std::cout << "Draw called from Circle\n"; }
