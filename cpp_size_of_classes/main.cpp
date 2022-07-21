#include <iostream>
#include <string>

class Dog {
public:
  Dog() = default;
  void print() {}

  void run() {}

private:
  size_t leg_count; // 8 bytes
  size_t arm_count; // 8 bytes
  int *p_age;       // 8 bytes
};

int main(int argc, char **argv) {
  Dog dog1;
  std::cout << "sizeof(size_t): " << sizeof(size_t) << "\n";
  // It determined by how many items inside the class, except from function
  std::cout << "sizeof(Dog): " << sizeof(Dog) << "\n";
  std::cout << "sizeof(dog1): " << sizeof(dog1) << "\n";

  // sizeof is determined by the size of the pointer but not the value that we
  // are pointing to
  std::string name{"I am the king of the universe!"};
  std::cout << "sizeof(name): " << sizeof(name) << "\n";

  return 0;
}
