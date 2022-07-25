#include "animal.h"
#include <iostream>

int main(int argc, char **argv) {

  Animal animal1("Animal1");
  Animal *animal2 = new Animal("Animal2");

  auto res = animal1.add();

  std::cout << res.a << " + " << res.b << " = " << res.sum << "\n";

  delete animal2;

  return 0;
}
