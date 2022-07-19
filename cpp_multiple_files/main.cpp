#include "compare.h" // Preprocessor
#include <iostream>

// Pass by value
void say_age(int age);
// Pass by pointer
void say_age2(int *age);
// Pass by reference
void say_age3(int &age);

// Input and Output
// Pass by reference
void max_str(const std::string &input1, const std::string input2,
             std::string &output);
// Pass by pointer
void max_double(double input1, double input2, double *output);
// Pass by value
int max_int(int input1, int input2);

int main(int argc, char **argv) {
  int a{10};
  int b{20};
  int age{20};

  Compare c1;

  int max_value{c1.max(a, b)};
  int min_value{c1.min(a, b)};
  std::cout << "maximum: " << max_value << std::endl;
  std::cout << "minimum: " << min_value << std::endl;

  // Pass by value
  std::cout << std::endl;
  std::cout << "====================Pass by value===================="
            << std::endl;
  say_age(age);
  std::cout << "Hello, your age is: " << age << " memory address: " << &age
            << std::endl;

  // Pass by pointer (Will change the origin value)
  std::cout << std::endl;
  std::cout << "====================Pass by pointer===================="
            << std::endl;
  std::cout << "hello, your age is(before): " << age
            << " memory address: " << &age << std::endl;
  say_age2(&age);

  // Pass by reference (Will change the origin value)
  std::cout << std::endl;
  std::cout << "====================Pass by reference===================="
            << std::endl;
  std::cout << "hello, your age is(before): " << age
            << " memory address: " << &age << std::endl;
  say_age3(age);

  // Input and output
  std::cout << std::endl;
  std::cout << "====================Input and output (Pass by "
               "reference)===================="
            << std::endl;
  std::string out_str;
  std::string string1{"Alabama"};
  std::string string2{"Bellevue"};
  max_str(string1, string2, out_str);
  std::cout << "max_str: " << out_str << std::endl;

  std::cout << std::endl;
  std::cout << "====================Input and output (Pass by "
               "pointer)===================="
            << std::endl;
  double out_double;
  double double1{20.0};
  double double2{49.0};
  // Passing the address to a pointer function
  max_double(double1, double2, &out_double);

  std::cout << "max_double: " << out_double << std::endl;

  std::cout << std::endl;
  std::cout << "====================Input and output (Pass by "
               "value)===================="
            << std::endl;
  int int1{20};
  int int2{4};
  // Use return value to get the result
  int out_int = max_int(int1, int2);

  std::cout << "max_int: " << out_int << std::endl;

  return 0;
}

// Definition either inline or inside a class
int Compare::max(int &a, int &b) { return std::max(a, b); }
int Compare::min(int &a, int &b) { return std::min(a, b); }
int Compare::multiply(int &a, int &b) { return a * b; };

// Pass by value
void say_age(int age) {
  ++age;
  // Pass by value, different memory location than the original variable
  std::cout << "Hello, your age is: " << age << " memory address: " << &age
            << std::endl;
}

// Pass by pointer
void say_age2(int *age) {
  // Changing the copy
  // Dereferencing
  ++(*age);
  // Pass by value, different memory location than the original variable
  std::cout << "Hello, your age is(after): " << *age
            << " memory address: " << &age << std::endl;
}

// Pass by pointer
void say_age3(int &age) {
  // Changing the copy
  ++age;
  std::cout << "Hello, your age is(after): " << age
            << " memory address: " << &age << std::endl;
}

// Input and output
// Received input value should not be able to modify, use const
// Pass by reference because we want to get the output from the function
void max_str(const std::string &input1, const std::string input2,
             std::string &output) {
  if (input1 > input2) {
    output = input1;
  } else {
    output = input2;
  }
}

// Pass by pointer
void max_double(double input1, double input2, double *output) {
  if (input1 > input2) {
    *output = input1;
  } else {
    *output = input2;
  }
}

// Pass by value
int max_int(int input1, int input2) { return std::max(input1, input2); }
