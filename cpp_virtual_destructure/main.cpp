#include "animal.h"
#include "dog.h"
#include "feline.h"
#include <iostream>

int main(int argc, char **argv) {

  // Through Animal pointer
  Animal *animal1 = new Dog("dark yellow", "dog1");
  animal1->breathe();

  // only animal destructor is called, BAD!
  // add virtual to the destructor to prevent such kind of things happened ->
  // polymorphism
  delete animal1;

  // Base class reference
  Animal *animal2 = new Feline("stripes", "feline1");
  Feline feline2("stripes", "feline2");
  Animal &animal_ref = feline2;

  // Dynamic Casting pointers
  Feline *feline_ptr = dynamic_cast<Feline *>(animal2);
  if (feline_ptr) {
    feline_ptr->breathe();
  } else {
    std::cout << "Couldn't cast to Feline pointer, Sorry\n";
  }

  // Dynamic casting reference
  Feline &feline_ref{dynamic_cast<Feline &>(animal_ref)};
  Feline *feline_ptr1{dynamic_cast<Feline *>(&animal_ref)};
  if (feline_ptr1) {
    feline_ptr1->breathe();
  } else {
    std::cout << "Couldn't cast to Feline pointer, Sorry\n";
  }

  return 0;
}
