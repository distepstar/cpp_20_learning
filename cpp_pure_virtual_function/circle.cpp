#include "circle.h"

Circle::Circle(double radius, std::string_view desc)
    : Shape(desc), m_r(radius) {}
