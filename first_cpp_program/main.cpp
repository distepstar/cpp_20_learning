// provide std library
#include <iostream>

int addNumber(int first_param, int second_param) {
  return first_param + second_param;
}

int main(int argc, char **argv) {

  int first_number{3}; // Statement
  int second_number{4};

  std::cout << "First number: " << first_number << std::endl;
  std::cout << "Seconde number: " << second_number << std::endl;

  int third_number = addNumber(first_number, second_number);

  std::cout << "Final number: " << third_number << std::endl;

  return 0;
}
