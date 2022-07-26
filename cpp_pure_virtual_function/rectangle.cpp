#include "rectangle.h"

Rectangle::Rectangle(double width, double height, std::string_view desc)
    : Shape(desc), m_w(width), m_h(height) {}
