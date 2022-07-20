#include "cylinder.h"
#include <iostream>

int main(int argc, char **argv) {

  Cylinder cylinder1;
  std::cout << "volumn c1: " << cylinder1.volume() << "\n";
  cylinder1.set_base_radius(3.0);
  cylinder1.set_height(2.0);

  std::cout << "volumn c1: " << cylinder1.volume() << "\n";

  Cylinder cylinder2;
  std::cout << "volumn c2: " << cylinder2.volume() << "\n";

  return 0;
}
