#include <iostream>

int main(int argc, char **argv) {
  bool red_light{true};
  bool green_light{false};

  if (red_light) {
    std::cout << "Stop!" << std::endl;
  } else {
    std::cout << "Go through!" << std::endl;
  }

  if (green_light) {
    std::cout << "The light is green!" << std::endl;
  } else {
    std::cout << "The light is not green!" << std::endl;
  }

  // sizeof boolean (1 bytes = 8 bits)
  std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

  // 1 = ture
  // 0 = false
  std::cout << std::endl;
  std::cout << "red_light: " << red_light << std::endl;
  std::cout << "green_light: " << green_light << std::endl;

  // turn 1 & 0 to true and false
  std::cout << std::boolalpha;
  std::cout << std::endl;
  std::cout << "boolalpha red_light: " << red_light << std::endl;
  std::cout << "boolalpha green_light: " << green_light << std::endl;

  return 0;
}
