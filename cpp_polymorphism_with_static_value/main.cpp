#include "Ellipse.h"
#include "Shape.h"
#include <iostream>

int main(int argc, char **argv) {

  Shape shape1("shape1");
  std::cout << "shape count: " << Shape::m_count << std::endl;
  Shape shape2("shape2");
  std::cout << "shape count: " << Shape::m_count << std::endl;
  Shape shape3("shape3");
  std::cout << "shape count: " << Shape::m_count << std::endl;

  Ellipse ellipse1(10, 12, "ellipse1");

  std::cout << "shape count: " << Shape::m_count << std::endl;
  std::cout << "ellipse count: " << Ellipse::m_count << std::endl;

  // Shape polymorphism

  Shape *shapes[]{&shape1, &ellipse1};

  for (auto &s : shapes) {
    std::cout << "count: " << s->get_count() << "\n";
  }

  return 0;
}
