// Standard library
#include <iostream>
#include <string>

// Structure of C++ = core library
int main(int argc, char **argv) {

  int age{0};
  std::string name;

  std::cout << "Please type in your name: " << std::endl;
  // This approach cannot catch spaces
  // std::cin >> name;
  std::getline(std::cin, name);

  std::cout << "Please type in your age: " << std::endl;
  std::cerr << "Error msg : Something is wrong" << std::endl;
  std::clog << "Log msg : Something happened" << std::endl;
  std::cin >> age;

  std::cout << "Hello, my name is " << name << "! I'm " << age << " years old!"
            << std::endl;

  return 0;
}
