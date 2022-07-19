#include <iostream>

int main(int argc, char **argv) {

  // Normal exception mechanism
  for (size_t i{}; i < 1000000000; i++) {
    try {
      int *lot_of_ints3{new int[1000000]};

    } catch (std::exception &ex) {
      std::cout << "Cought exception ourselves: " << ex.what() << std::endl;
    }
  }

  // std::nothrow
  // used to prevent throwing exception while error occurs

  for (size_t i{}; i < 100000000; i++) {
    int *lots_of_int{new (std::nothrow) int[1000000]};
    // Self handle
    if (lots_of_int == nullptr) {
      std::cout << "Memory allocation failed" << std::endl;
    } else {
      std::cout << "Memory allocation succeeded" << std::endl;
    }
  }

  // Pointer safety
  int *p_number1{new int{}};

  // compact nullptr check
  if (p_number1) {
    std::cout << "Do something" << std::endl;
  } else {
    std::cout << "Do nothing" << std::endl;
  }

  delete p_number1;
  p_number1 = nullptr;

  // You dont have to do nullptr checking when you are deleting pointer
  // if (p_number1 != nullptr) {
  //   delete p_number1;
  //   p_number1 = nullptr;
  // }

  return 0;
}
