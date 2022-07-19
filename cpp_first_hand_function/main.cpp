#include <algorithm>
#include <iostream>

void enter_bar(unsigned int age) {
  if (age > 18) {
    std::cout << "You are " << age << " years old. Please proceed."
              << std::endl;

  } else {
    std::cout << "Sorry, you're too young for this. No offense!" << std::endl;
  }

  // return void
  return;
}

int get_max(size_t a, size_t b) { return std::max(a, b); }

// try callback function in c++

void try_callback(unsigned int x, void (*callback)(unsigned int)) {
  std::cout << "this is callback function" << std::endl;
  callback(x);
}

// Function declaration
int multiply(int &a, int &b);

int main(int argc, char **argv) {

  // Variables
  int a{10};
  int b{2};

  // First Hand on Functions
  enter_bar(19);

  // callback
  try_callback(20, &enter_bar);

  for (size_t i{0}; i < 20; i++) {
    enter_bar(i);
  }

  std::cout << get_max(2, 3) << std::endl;

  std::cout << "========================================" << std::endl;

  const int res = multiply(a, b);
  std::cout << res << std::endl;

  return 0;
}

// Functions definition
int multiply(int &a, int &b) { return a * b; }
