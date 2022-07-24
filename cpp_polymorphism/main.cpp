#include "circle.h"
#include "library.h"
#include "oval.h"
#include "shape.h"

// Pointer parameter
void draw_shape(const Shape *s) { s->draw(); }
void draw_shape_v1(const Shape &s) { s.draw(); }

int main(int argc, char **argv) {

  Shape shape1("Shape 1");
  Oval oval1(2.0, 3.5, "Oval 1");
  Circle circle1(3.3, "Circle 1");

  // Base pointer
  std::cout << "\n";
  std::cout << "Base pointer\n";

  Shape *shape_ptr =
      &shape1; // it's going to look for the type of the pointer, so no matter
               // which subclasses you passed in the Shape pointer, it will
               // still calling the Shape function
  shape_ptr->draw();

  shape_ptr = &oval1;
  shape_ptr->draw(); // Draw an oval -> Oval::draw();

  shape_ptr = &circle1;
  shape_ptr->draw(); // Draw an circle -> Circle::draw();

  // Base reference
  std::cout << "\n";
  std::cout << "Base reference\n";

  // Reference characteristic, it only reference to the memory address of the
  // passed in variable declared
  Shape &shape_ref = shape1;
  std::cout << "&shape1: " << &shape1 << "\n";
  std::cout << "&shape_ref: " << &shape_ref << "\n";
  shape_ref.draw();
  shape_ref = oval1;
  std::cout << "&oval1: " << &oval1 << "\n";
  std::cout << "&shape_ref: " << &shape_ref << "\n";
  shape_ref.draw();
  shape_ref = circle1;
  std::cout << "&circle1: " << &circle1 << "\n";
  std::cout << "&shape_ref: " << &shape_ref << "\n";
  shape_ref.draw();

  // Shapes stored in a collections
  Circle circle_collection[]{circle1, Circle(10.0, "Circle2"),
                             Circle(20.0, "Circle3")};
  Oval oval_collection[]{oval1, Oval(22.3, 51.1, "Oval2")};
  // More arrays as you have more shape types, 100? Messy right?

  std::cout << "\n";

  // Object pointer parameter
  draw_shape(&circle1);
  // Object reference parameter
  draw_shape_v1(oval1);

  std::cout << "\n";
  std::cout << "Shape loop\n";

  Shape *shape_collection[]{&shape1, &circle1, &oval1};
  for (Shape *s_ptr : shape_collection) {
    draw_shape(s_ptr);
  }

  std::cout << "\n";
  std::cout << "Size of classes\n";
  std::cout << "sizeof(Shape): " << sizeof(Shape) << "\n";
  std::cout << "sizeof(Oval): " << sizeof(Oval) << "\n";
  std::cout << "sizeof(Circle): " << sizeof(Circle) << "\n";

  std::cout << "\n";
  std::cout << "Object slicing\n";
  // To strip of the layer of oval
  Shape shape2 = circle1;
  std::cout << "sizeof(shape2): " << sizeof(shape2) << "\n";
  draw_shape(&shape2); // it will become draw from shape

  std::cout << "\n";

  return 0;
}
