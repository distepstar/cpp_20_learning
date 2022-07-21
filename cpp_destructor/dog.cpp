#include "dog.h"

Dog::Dog(std::string_view name_param, std::string_view breed_param,
         int age_param) {
  name = name_param;
  breed = breed_param;
  // Heap memory
  p_age = new int{age_param};
  // this pointer -> pointing object itselfs
  std::cout << "Constructor called for: " << name << " constructed at " << this
            << "\n";
}

// Chained call using pointer
Dog *Dog::print_dog_info() {
  std::cout << "Dog name: " << name << ", Breed: " << breed
            << ", Age: " << *p_age << "\n";
  return this;
};

// using 'this' pointer to point the name varialbe -> prevent naming conflict
Dog *Dog::set_dog_name(std::string_view name) {
  this->name = name;
  return this;
}
Dog *Dog::set_dog_breed(std::string_view breed) {
  this->breed = breed;
  return this;
}
Dog *Dog::set_dog_age(int p_age) {
  std::cout << "&this->p_age: " << &this->p_age << "\n";
  *(this->p_age) = p_age;
  // or
  // this->p_age = nullptr;
  // this->p_age = new int{p_age};
  std::cout << "&p_age: " << &p_age << "\n";
  std::cout << "&this->p_age: " << &this->p_age << "\n";
  return this;
}

Dog &Dog::get_dog_name() {
  std::cout << this->name << "\n";
  // Dereference
  return *this;
}

Dog &Dog::get_dog_breed() {
  std::cout << this->breed << "\n";
  // Dereference
  return *this;
}
Dog &Dog::get_dog_age() {
  std::cout << *(this->p_age) << "\n";
  // Dereference
  return *this;
}

Dog::~Dog() {
  delete p_age;
  std::cout << "Destructor called for: " << name << "\n";
}
