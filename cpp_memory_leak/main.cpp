#include <iostream>

int main(int argc, char **argv) {
  // Memory leaking
  // Avoid memory leak at all cost

  int *p_number{new int{64}}; // live in address1

  // Should delete and reset here

  int number{55}; // live in address2

  p_number = &number; // Now p_number points to address2, but address1 is still
                      // in use by our program. But our program has lost access
                      // to the memory location. Memory has been leak

  // Double allocation
  int *p_number1{new int{55}};

  // Use the pointer
  // Should delete and reset here

  // p_number1 = new int { 66 } // the memory with int {55} leaked

  // Nested scope
  {
    int *p_number2{new int{57}};
    // Should delete and reset here
  }
  // Memory of new int{57} leaked
  // Taking too much heap memory will cost the OS terminate your program

  return 0;
}
