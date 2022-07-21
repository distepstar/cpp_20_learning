#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include <string_view>

class Dog {
public:
  Dog() = default;
  Dog(std::string_view name_param, std::string_view breed_param, int age_param);
  // pointer
  Dog *print_dog_info();
  Dog *set_dog_name(std::string_view name);
  Dog *set_dog_breed(std::string_view breed);
  Dog *set_dog_age(int p_age);
  // reference
  Dog &get_dog_name();
  Dog &get_dog_breed();
  Dog &get_dog_age();

  ~Dog();

private:
  std::string name;
  std::string breed;
  int *p_age{nullptr};
};

#endif // !DOG_H
