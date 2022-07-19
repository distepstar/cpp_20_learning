#include <iostream>

int main(int argc, char **argv) {

  int scores[10]{65, 66, 67, 68, 69, 70, 71, 72, 73, 74};

  // original way to get size of the array (sizeof(arr) / sizeof(*arr))
  // Answer maybe wrong if it's a pointer type that aren't arrays
  for (std::size_t i{}; i < (sizeof(scores) / sizeof(*scores)); i++) {
    std::cout << "value: " << static_cast<char>(scores[i]) << std::endl;
  }

  // C++17 approach to get size of array
  for (unsigned int i{}; i < std::size(scores); i++) {
    std::cout << "value: " << static_cast<char>(scores[i]) << std::endl;
  }

  // Grabbing the size of array just same as (sizeof(arr) / sizeof(*arr))
  // bits of array / single element bits of array
  unsigned int count{sizeof(scores) / sizeof(scores[0])};
  unsigned int firstElement{sizeof(scores)};

  std::cout << "Count is: " << count << std::endl;
  std::cout << "firstElement is: " << firstElement << std::endl;

  // it will auto determine the size of the array
  int scores2[]{1, 2, 3, 4, 5};

  // For item in items like javascript
  // Range based loop
  for (auto score : scores) {
    std::cout << "Score: " << score << std::endl;
  }

  // Null termination -> tell c++ that the character has hit the end
  char message[]{'H', 'e', 'l', 'l', 'o', '\0'};
  std::cout << "message: " << message << std::endl;
  // Auto fill null termination
  char message2[6]{'H', 'e', 'l', 'l', 'o'};
  std::cout << "message: " << message2 << std::endl;

  // Will print some garbage after hello as it's not c string
  char message3[]{'H', 'e', 'l', 'l', 'o'};
  std::cout << "message: " << message3 << std::endl;

  // Proper way to create a c string
  char message4[]{"Hello world"};
  std::cout << "message: " << message4 << std::endl;

  // Index out of bound explaination
  // [memory] [memory_of_array] [memory]
  // [memory] are occupuied by another programs, accessing out bound index will
  // cause some issues

  char char_arr[]{"Hello Wolrd"};
  // It will read garbage or crash your program
  std::cout << "Out bound: " << char_arr[11] << std::endl;

  return 0;
}
