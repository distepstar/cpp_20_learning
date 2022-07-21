#include "cylinder.h"

#include <iostream>

int main(int argc, char **argv) {

  // Stack
  Cylinder cylinder1;
  std::cout << "volumn c1: " << cylinder1.volume() << "\n";
  cylinder1.set_base_radius(3.0);
  cylinder1.set_height(2.0);

  std::cout << "volumn c1: " << cylinder1.volume() << "\n";

  Cylinder cylinder2;
  std::cout << "volumn c2: " << cylinder2.volume() << "\n";

  Cylinder *cylinder3 = new Cylinder(4.0, 3.0); // create on heap
  // arrow notation
  std::cout << "volumn c3: " << cylinder3->volume() << "\n";
  // or dereferencing
  // std::cout << "volumn c3: " << (*cylinder3):volume() << "\n";
  // delete from heap
  delete cylinder3;

  Cylinder cylinder_obj;
  // pointer to the cylinder_object
  Cylinder *p_cylinder_obj = &cylinder_obj;
  // reference to the cylinder_object
  Cylinder &r_cylinder_obj = cylinder_obj;

  std::cout << r_cylinder_obj.volume() << "\n";

  std::cout << "p_cylinder_obj->volumn: " << p_cylinder_obj->volume() << "\n";
  std::cout << "&cylinder_obj: " << &cylinder_obj << "\n";
  std::cout << "&r_cylinder_obj: " << &r_cylinder_obj << "\n";

  return 0;
}
