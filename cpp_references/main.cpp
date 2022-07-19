#include <iostream>

int main(int argc, char **argv) {
  int int_value{45};
  double double_value{33.65};

  // reference variable symbol &
  int &ref_int_value{int_value}; // braces initialization
  int &ref_int_value2 = int_value;
  double &ref_double_value{double_value};

  // you have to initialize the value once you declared the reference variable

  std::cout << "int_value: " << int_value << std::endl;
  std::cout << "ref_int_value: " << ref_int_value << std::endl;
  std::cout << "&int_value: " << &int_value << std::endl;
  std::cout << "&ref_int_value: " << &ref_int_value << std::endl;
  // Still, data size is same as the data type
  std::cout << "sizeof(int): " << sizeof(int) << std::endl;
  std::cout << "sizeof(int&): " << sizeof(int &) << std::endl;
  // Modify the reference to change the original value (pass by reference)

  std::cout << "==============================" << std::endl;
  std::cout << "Modified reference to 40" << std::endl;

  ref_int_value = 40;
  std::cout << "int_value: " << int_value << std::endl;
  std::cout << "ref_int_value: " << ref_int_value << std::endl;
  std::cout << "ref_int_value2: " << ref_int_value2 << std::endl;
  std::cout << "==============================" << std::endl;
  std::cout << "Modified varible to 30" << std::endl;

  int_value = 30;
  std::cout << "int_value: " << int_value << std::endl;
  std::cout << "ref_int_value: " << ref_int_value << std::endl;
  std::cout << "ref_int_value2: " << ref_int_value2 << std::endl;

  // Pointer and reference
  double double_value2{13.4};
  double &ref_double_value2{double_value2};
  double *ptr_double_value2{&double_value2};

  // Reading
  std::cout << "double_value: " << double_value2 << std::endl;
  std::cout << "ref_double_value: " << ref_double_value2 << std::endl;
  std::cout << "ptr_double_value: " << ptr_double_value2 << std::endl;
  std::cout << "*ptr_double_value: " << *ptr_double_value2 << std::endl;

  *ptr_double_value2 = 40.0;
  std::cout << std::endl;
  std::cout << "double_value: " << double_value2 << std::endl;
  std::cout << "ref_double_value: " << ref_double_value2 << std::endl;
  std::cout << "ptr_double_value: " << ptr_double_value2 << std::endl;
  std::cout << "*ptr_double_value: " << *ptr_double_value2 << std::endl;

  int int_value3{30};
  int &ref_int_value3{int_value3};
  int int_value4{50};

  // it doesn't change the reference -> only change the value
  ref_int_value3 = int_value4;

  // const pointer
  double *const const_p_double_value{new double{3.1415}};
  // constant value cannot be changed -> error
  // const_p_double_value = 3.4;

  int age{30};
  // const ptr to const
  // const int, const ptr
  const int *const const_ptr_to_const_age{&age};
  // *const_ptr_to_const_age = 32;

  // No such kind of thing
  // const int &const weird_ref_age{age};

  // const reference doesn't be the value has to be const
  const int &ref_age{age};

  return 0;
}
