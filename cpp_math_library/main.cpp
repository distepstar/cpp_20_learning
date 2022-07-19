#include <cmath>
#include <iostream>

int main(int argc, char **argv) {
  double weight{7.7};
  // Math.floor in Java
  std::cout << "Weight rounded to floor is: " << std::floor(weight)
            << std::endl;
  std::cout << "Weight rounded to ceil is: " << std::ceil(weight) << std::endl;

  // Absolute value -> positive value
  double saving{-5000};
  weight = 7.7;
  std::cout << "Abs of weight is: " << std::abs(weight) << std::endl;
  std::cout << "Abs of saving is: " << std::abs(saving) << std::endl;

  // Exponential: f(x) = e ^ x, where x = 2.71828
  double exponential = std::exp(10);
  std::cout << "The exponential of 10 is: " << exponential << std::endl;

  // Power: x ^ 10
  std::cout << "3 ^ 4 is: " << std::pow(3, 4) << std::endl;
  std::cout << "9 ^ 3 is: " << std::pow(9, 3) << std::endl;

  // Log: reverse function of pow
  std::cout << "log(30) is: " << std::log(30) << std::endl;
  std::cout << "log(50) is: " << std::log(50) << std::endl;

  // Square Root
  std::cout << "The square root of 81 is: " << std::sqrt(81) << std::endl;

  // Round
  std::cout << "Round of 3.654 is: " << std::round(3.654) << std::endl;

  // Integral types less than 4 bytes in size don't support arithmetic
  // operations
  // char 1 bytes , short int 2 bytes

  short int var1{30};
  short int var2{20};

  char var3{40};
  char var4{50};

  std::cout << "size of var1: " << sizeof(var1) << std::endl;
  std::cout << "size of var2: " << sizeof(var2) << std::endl;
  std::cout << "size of var3: " << sizeof(var3) << std::endl;
  std::cout << "size of var4: " << sizeof(var4) << std::endl;

  // addition become in -> they will becom 4 bytes
  auto result = var1 + var2;
  auto result2 = var3 + var4;

  std::cout << "size of result1: " << sizeof(result) << std::endl;
  std::cout << "size of result2: " << sizeof(result2) << std::endl;

  return 0;
}
