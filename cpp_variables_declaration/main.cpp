#include <iostream>

int main(int argc, char **argv) {
  // let the compiler deduce the type
  // similar to let and var in javascript

  // integer
  auto var1{12};
  // double
  auto var2{0.1};
  // float
  auto var3{0.1f};
  // long
  auto var4{15.0l};
  // char
  auto var5{'c'};

  // unsigend int
  auto var6{123u};
  // unsigned long
  auto var7{123ul};
  // long long
  auto var8{123ll};

  std::cout << "sizeof(int): " << sizeof(var1) << "bytes" << std::endl;
  std::cout << "sizeof(double): " << sizeof(var2) << "bytes" << std::endl;
  std::cout << "sizeof(float): " << sizeof(var3) << "bytes" << std::endl;
  std::cout << "sizeof(long): " << sizeof(var4) << "bytes" << std::endl;
  std::cout << "sizeof(char): " << sizeof(var5) << "bytes" << std::endl;
  std::cout << "sizeof(uint): " << sizeof(var6) << "bytes" << std::endl;
  std::cout << "sizeof(ulong): " << sizeof(var7) << "bytes" << std::endl;
  std::cout << "sizeof(longlong): " << sizeof(var8) << "bytes" << std::endl;

  var6 = -22; // Danger! Assign negative number to an unsigned variable.
  std::cout << "var6: " << var6 << std::endl;

  return 0;
}
