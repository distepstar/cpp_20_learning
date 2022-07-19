#include <bitset>
#include <iostream>
#include <sstream>

int main(int argc, char **argv) {
  // pointer variable
  // naming the variable start with p_ will make less confuse
  // this pointer var can only store int variable address
  // pointer have the same size with the pointing variable
  int *p_numebr{};
  double *p_fractional_number{};

  // Explicitely initialize to nullptr
  int *p_number1{nullptr};
  double *p_fractional_number1{nullptr};

  // Storing address
  int int_var{30};
  // & address operator
  int *p_int_var{&int_var};

  std::cout << "Int var: " << int_var << std::endl;
  std::cout << "Int var address: " << p_int_var << std::endl;

  std::stringstream ss;
  ss << std::hex << p_int_var;
  unsigned n;
  ss >> n;

  std::bitset<32> b(n);
  std::cout << b.to_string() << std::endl;

  // Dereferencing a pointer
  int *p_int2{nullptr};
  int int_data{56};
  p_int2 = &int_data;

  // Get the actual value from the address
  std::cout << "value: " << *p_int2 << std::endl;

  // initial c-string using pointer
  // C++11 doesn't allow non-constant char pointer assignment
  const char *p_message{"Hello world!"};

  std::cout << p_message << std::endl;
  // The Dereferencing value will be the first character of the array
  std::cout << "Dereferencing the p_message: " << *p_message << std::endl;
  // It will  become "Bello world!" but compiler will crash
  // *p_message = 'B';

  // Uninitialize pointer, contain junk address
  int *p_int_var2;
  int int_var2{40};
  // assigning address to pointer value
  p_int_var2 = &int_var2;
  std::cout << "Uninitialize pointer: " << *p_int_var2 << std::endl;

  // Bad approach
  int *p_int_var3;
  // Writing variable through Dereferencing is a bad approach
  *p_int_var3 = 55;
  // Bus error
  std::cout << "Bad assignment pointer: " << *p_int_var3 << std::endl;

  return 0;
}
