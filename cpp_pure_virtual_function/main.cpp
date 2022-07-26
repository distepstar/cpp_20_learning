#include "circle.h"
#include "point.h"
#include "rectangle.h"
#include "shape.h"
#include <iostream>
#include <memory>

int main(int argc, char **argv) {

  // If a class has at least on pure virtual function -> abstract class
  // Cannot create an intance of a abstract class
  // Shape *shape_ptr = new Shape("Shape1");

  const Shape *shape_rect = new Rectangle(10, 10, "rect1");
  double surface = shape_rect->surface();

  std::cout << "The dynamic type of shape rect is: "
            << typeid(*shape_rect).name() << "\n";
  std::cout << "The surface of shape rect is: " << surface << "\n";

  std::cout << "--------------------\n";

  const Shape *shape_circle = new Circle(10, "circle1");
  surface = shape_circle->surface();
  std::cout << "The dynamic type of shape circle is: "
            << typeid(*shape_circle).name() << "\n";
  std::cout << "The surface of shape circle is: " << surface << "\n";

  Point p1(10, 20);
  std::cout << "p1: " << p1 << "\n";
  // operator<<(std::cout, p1);

  Point *p2 = new Point(20, 40);
  std::cout << "p2: " << *p2 << "\n";
  delete p2;

  // smart pointer
  std::unique_ptr<Point> p3 = std::make_unique<Point>(30, 60);
  std::cout << *p3 << "\n";

  return 0;
}
