#include <iostream>

int main(int argc, char **argv) {

  // in c++, it only has char
  // 1 bytes = 256 posibility value

  char character1{'a'};
  char character2{'r'};
  char character3{'r'};
  char character4{'o'};
  char character5{'w'};

  std::cout << character1 << std::endl;
  std::cout << character2 << std::endl;
  std::cout << character3 << std::endl;
  std::cout << character4 << std::endl;
  std::cout << character5 << std::endl;

  // int in char can represent letter in ASCII table
  // this is how letter represent in memory
  // you can use string in the std library to instantiate a set of string
  char value = 65; // ASCII code that represent 'A'
  std::cout << "value: " << value << std::endl;
  // static_cast is for datatype conversion
  std::cout << "value(int): " << static_cast<int>(value) << std::endl;

  return 0;
}
