#include <iomanip>
#include <iostream>

int main(int argc, char **argv) {
  int decimal_number = 15;
  int hex_number = 0x0f;
  int oct_number = 017;
  int binary_number = 0b00001111;

  /*
  normal number,
  hex: start with 0x;
  oct: 3 bits;
  binary: start with 0b;
  */
  std::cout << "Decimal: " << decimal_number << std::endl;
  std::cout << "Hex: " << hex_number << std::endl;
  std::cout << "Oct: " << oct_number << std::endl;
  std::cout << "Binary: " << binary_number << std::endl;

  /*
  Braced initialization -> value {10}
  Functional initialization -> value (10)
  Assignment initialization -> value = 10
  */

  // empty vairable may contain random garbage value. WARNING
  // integer usually takes 4 bytes = 32 bits
  int number_count;
  // Infomation lost . less safe than braced initializers
  // Chop off the fracional number you have: 2.9 -> 2
  // int parentheses_var(2.9);
  // stop from compiler or get an error because you applying fractional number
  // to integer variable
  // int curlybrace_var{2.9};

  // Range: 0 ~ 2^n - 1 -> positive number only
  unsigned int unsigned_integer{10};
  // Range: -2^(n - 1) ~ 2^(n - 1) - 1 -> negative to positive number
  signed int signed_integer{-10};

  // 2 bytes variable = 16 bits
  short short_var{-32768};

  // 4 or 8 bytes = 32 bits or 64 bits
  // 4 bytes for long variable
  // 4 bytes + 4 bytes = 8 bytes
  long long_var{88};
  long int long_int_var{77};
  // 8 bytes = 64 bits
  long long long_long_var{10000};

  // 4 bytes -> Precision 7
  // float varible declartion must add f at last -> or it will turn the value to
  // double and chopping of the precision
  float float_var{2235212.0f};
  // float number4{192400023.0f}; // Error: narrowing conversion -> chop the
  // over flooding value 8 bytes -> Precision 15
  double double_var{22928392832123.0};
  // 12 bytes -> Precision > double
  long double long_double_var{2.00000000L};
  // Scientific Notation - 2e5 = 10^5
  double number_scienNotat{2e5};

  std::cout << "------------------------------------------" << std::endl;
  std::cout << "Size of Long Int: " << sizeof(long_int_var) << std::endl;
  std::cout << "Size of Long Long: " << sizeof(long_long_var) << std::endl;
  // set precision for cout -> require iomanip library
  std::cout << std::setprecision(20);
  std::cout << "------------------------------------------" << std::endl;
  std::cout << "Size of float: " << sizeof(float_var) << std::endl;
  std::cout << "Size of double: " << sizeof(double_var) << std::endl;

  double number10{5.6};
  double number11{};
  double number12{};

  double result{number10 / 11};

  std::cout << "------------------------------------------" << std::endl;
  std::cout << number10 << " / " << number11 << " yields " << result
            << std::endl;
  std::cout << result << " + " << number10 << " yields " << result + number10
            << std::endl;

  // NaN result
  result = number11 / number12;
  std::cout << number11 << " / " << number12 << " yields " << result
            << std::endl;

  return 0;
}
