#include "Shape.h"

int Shape::m_count{0};

Shape::Shape() { ++m_count; }

Shape::Shape(const std::string &desc) : m_desc(desc) { ++m_count; }

Shape::~Shape() {
  std::cout << "Destructor called from Shape\n";
  --m_count;
}

void Shape::draw() const {
  std::cout << "Shape::draw() called for: " << m_desc << std::endl;
}
int Shape::get_count() const { return m_count; }
