#include <iostream>

int main(int argc, char **argv) {

  // std::nothrow
  // Dynamic array is stored on the heap but not the stac

  size_t size{10};

  // contain junk values
  double *p_salaries{new double[size]};
  int *p_students{new int[size]};

  // 8 bytes x 10  = 80 bytes stored on the the heap dynamically
  double *p_scores{
      new double[size]{1, 2, 3, 4, 5}}; // First five will be {1, 2, 3, 4, 5},
                                        // and the rest of the memory will be 0
  // Different ways to declare arrays
  double *p_salaries2{new double[size]};
  int *p_students2{new (std::nothrow) int[size]};
  double *p_scores2{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};

  // nullptr checking
  if (p_scores) {
    for (size_t i{}; i < size; ++i) {
      std::cout << "value: " << p_scores[i] << " : " << *(p_scores + i)
                << std::endl; // another way to get value from array
    }
  }

  // Delete array pointers from heap
  delete[] p_scores;
  p_scores = nullptr;
  delete[] p_salaries;
  p_salaries = nullptr;
  delete[] p_students;
  p_students = nullptr;

  delete[] p_scores2;
  p_scores = nullptr;
  delete[] p_salaries2;
  p_salaries = nullptr;
  delete[] p_students2;
  p_students = nullptr;

  double *temperatures{new (std::nothrow) double[size]{0.0, 0.1, 0.2, 0.3}};

  // // Dyanmic array doesn't support range loop
  // for (double item : temperatures) {
  //   std::cout << "temperatures: " << item << std::endl;
  // }

  // cannot use the size function in std to measure the size of dynamic array
  // std::cout << "size of temperatures: " << std::size(temperatures) <<
  // std::endl;

  delete[] temperatures;
  temperatures = nullptr;

  return 0;
}
