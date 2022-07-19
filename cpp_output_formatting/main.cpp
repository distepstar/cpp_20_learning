#include <iomanip>
#include <iostream>
#include <limits>

int main(int argc, char **argv) {

  // setw = set width
  // std::right = align to right
  // internal justification -> justify sign to left, data to right
  // e.g. -10 = -   10;
  // std::setfill('-') -> fill space with char

  // std::showpos -> show sign of the number
  // std::oct, std::dec, std::hex -> show data in decimal || oct || hex
  // std::showbase -> show the base of the hex || oct
  // std::boolalpha -> set boolean to true false value
  // std::setprecision(10) -> set precision to specific number

  // std::uppercase -> uppercase the words
  // std::fixed -> avoid showing the scientific notation
  // std::scientific -> everything will show in scientific notation
  // std::unsetf(std::ios::scientific | std::ios::fixed) -> back to its default
  // std:: showpoint -> show decimal point floating values

  // Formatted Table
  std::cout << std::right;
  std::cout << std::internal;
  std::cout << "Formatted Table: " << std::endl;
  std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname"
            << std::setw(10) << "Age" << std::endl;
  std::cout << std::setw(10) << "Lei" << std::setw(10) << "Louis"
            << std::setw(10) << "24" << std::endl;

  // Floating point
  // std::numeric_limits<T>:min() -> smallest positive number;
  // std::numeric_limits<T>:max() -> bigest positive number;
  // std::numeric_limits<T>:lowest() -> lowest negative number;
  // Signed short, int doesn't not contain lowest -> min will become the lowest
  // negative number

  std::cout << "--------------------------------" << std::endl;
  std::cout << "The min of short is: " << std::numeric_limits<short>::min()
            << std::endl;
  std::cout << "The max of short is: " << std::numeric_limits<short>::max()
            << std::endl;
  std::cout << "The min of unsigned short is: "
            << std::numeric_limits<unsigned short>::min() << std::endl;
  std::cout << "The max of unsigned short is: "
            << std::numeric_limits<unsigned short>::max() << std::endl;

  std::cout << "The min of float is: " << std::numeric_limits<float>::min()
            << std::endl;
  std::cout << "The max of float is: " << std::numeric_limits<float>::max()
            << std::endl;
  std::cout << "The lowest of unsigned float is: "
            << std::numeric_limits<float>::lowest() << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "Using std::fixed to avoid sceintific notation" << std::endl;
  std::cout << std::fixed << std::setprecision(7);
  std::cout << "The min of float is: " << std::numeric_limits<float>::min()
            << std::endl;
  std::cout << "The max of float is: " << std::numeric_limits<float>::max()
            << std::endl;
  std::cout << "The lowest of unsigned float is: "
            << std::numeric_limits<float>::lowest() << std::endl;

  return 0;
}
