#include "shape.h"
#include "library.h"
#include <type_traits>

Shape::Shape(const std::string_view description_param)
    : description(description_param) {}
Shape::Shape(const Shape &shape) : description(shape.description) {}
Shape::~Shape() { std::cout << "Shape destructor called\n"; }

void Shape::draw() const { std::cout << "Draw called from Shape\n"; }
