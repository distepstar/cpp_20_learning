#include "animal.h"
#include <iostream>

int main(int argc, char **argv) {

  Animal *animal = new Animal("Louis", "Black");

  animal->run();

  return 0;
}
