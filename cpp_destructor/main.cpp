#include "dog.h"
#include <iostream>

int main(int argc, char **argv) {
  // Exist in stack
  Dog d1("Stack Dog", "Shepherd", 22);
  // Exist in heap
  Dog *d2 = new Dog("Heap Dog", "Chiwawa", 24);

  d1.print_dog_info();

  d2->print_dog_info();

  delete d2;
  // Destructor calling sequence (First in last out)
  Dog dog1("Stack Dog 1", "Shepherd", 22);
  dog1.set_dog_name("Stack Dog 100");
  Dog dog2("Stack Dog 2", "Shepherd", 22);
  Dog dog3("Stack Dog 3", "Shepherd", 22);
  Dog dog4("Stack Dog 4", "Shepherd", 22);

  // Memeory testing
  int age_change{20};
  dog4.set_dog_age(age_change);
  dog4.print_dog_info();
  age_change = 40;
  dog4.print_dog_info();
  std::cout << "\n";

  Dog *chain_dog = new Dog("Testing", "Testing", 0);
  Dog chain_dog2("Testing", "Testing", 20);
  // Chained calls pointer -> (function should be declared in the type of Dog*,
  // and return this)
  std::cout << "\n";
  std::cout << "Chain Dog 1\n";

  chain_dog->set_dog_name("Adam")->set_dog_breed("Shepherd")->set_dog_age(5);

  chain_dog->print_dog_info();

  // Chained calls reference . (function should be declared in the type of Dog&,
  // and return *this)
  std::cout << "\n";
  std::cout << "Chain Dog 2\n";
  chain_dog2.set_dog_name("Dumb Chain Dog")
      ->set_dog_breed("Shepherd")
      ->set_dog_age(10);
  chain_dog2.get_dog_name().get_dog_breed().get_dog_age();

  delete chain_dog;

  return 0;
}
