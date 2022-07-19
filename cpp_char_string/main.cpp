#include <cctype>
#include <cstring>
#include <ios>
#include <iostream>
#include <iterator>

int main(int argc, char **argv) {
  // c-string is not safe and convenient to work with
  const char *c_string{"hello world"};
  char c_string2[]{"Hello world"};

  // cctype library
  std::cout << std::boolalpha;
  std::cout << "C is alphanumeric: " << static_cast<bool>(std::isalnum('C'))
            << std::endl;
  std::cout << "^ is alphanumeric: " << static_cast<bool>(std::isalnum('^'))
            << std::endl;
  std::cout << "C is alpha: " << static_cast<bool>(std::isalpha('C'))
            << std::endl;

  char input_char{'*'};
  if (std::isalnum(input_char)) {
    std::cout << input_char << " is alphanumeric." << std::endl;
  } else {
    std::cout << input_char << " is not alphanumeric." << std::endl;
  }

  std::cout << "========================================" << std::endl;

  // It's not possible to get the size from a dynamic array, you have to
  // remember the size -> use vector to solve the problem
  // const char *char_message{
  //     new char[]{"Hello there. How are you doing? The sun is  shining."}};
  const char char_message[]{
      "Hello there. How are you doing? The sun is shining."};
  std::cout << "message: " << char_message << std::endl;

  int *blankcount{new int{}};
  for (size_t i{}; i < std::size(char_message); i++) {
    // isblank from cctype library
    std::cout << "sizeof =  " << sizeof(char_message) / sizeof(char_message[0])
              << std::endl;
    if (std::isblank(char_message[i])) {
      std::cout << "Found a blank character at index: [" << i << "]"
                << std::endl;
      ++*blankcount;
    }
  }

  std::cout << "In total we found " << *blankcount << " blank characters."
            << std::endl;

  delete blankcount;
  blankcount = nullptr;

  std::cout << "========================================" << std::endl;
  std::cout << "std::islower and std::isupper" << std::endl;

  char thought[]{
      "The C++ Programming Language is one of the most used on the Planet"};
  int lower_count{};
  int upper_count{};

  std::cout << "Original string: " << thought << std::endl;

  for (auto character : thought) {
    if (std::islower(character)) {
      std::cout << " " << character;
      ++lower_count;
    }
    if (std::isupper(character)) {
      std::cout << " " << character;
      ++upper_count;
    }
  }
  std::cout << std::endl;
  std::cout << "Found " << lower_count << " lowercase characters and "
            << upper_count << " uppercase characters." << std::endl;

  for (size_t i{}; i < std::size(thought); i++) {
    char c = thought[i];
    if (std::islower(c)) {
      thought[i] = std::toupper(c);
    }
    if (std::isupper(c)) {
      thought[i] = std::tolower(c);
    }
  }

  std::cout << "Modified string: " << thought << std::endl;

  // char pointer
  const char *p_message{"Hello world!"};
  std::cout << std::endl;
  std::cout << "========================================" << std::endl;
  // check string length (ignore null character)
  std::cout << "Total number of string(std::strlen): " << std::strlen(thought)
            << std::endl;
  std::cout << "Total number of array(std::size): " << std::size(thought)
            << std::endl;
  // strlen also work with decayed arrays
  std::cout << "Total number of pointer c-string(std::strlen): "
            << std::strlen(p_message) << std::endl;
  // Print the size of pointer
  std::cout << "Total number of pointer c-string(sizeof): " << sizeof(p_message)
            << std::endl;

  std::cout << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "compare string" << std::endl;
  const char *string_data1{"alabama"};
  const char *string_data2{"blabama"};
  std::cout << "std::strcmp(" << string_data1 << ", " << string_data2
            << ") : " << std::strcmp(string_data1, string_data2) << std::endl;

  std::cout << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "compare n chars in string" << std::endl;
  size_t selectCount{3};
  std::cout << std::boolalpha;
  std::cout << "std::strncmp(" << string_data1 << ", " << string_data2 << ", "
            << selectCount
            << ") : " << std::strncmp(string_data1, string_data2, selectCount)
            << std::endl;

  std::cout << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "Find first occurrence" << std::endl;
  const char *str{"Try not. Do, or do not. There is no try."};
  char target{'T'};
  const char *res = str;
  int iterations{};

  while ((res = std::strchr(res, target)) != nullptr) {
    std::cout << "Found '" << target << " starting at '" << res << "\n";
    ++res;
    ++iterations;
  }

  std::cout << "iterations: " << iterations;

  std::cout << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "Find last occurrence" << std::endl;
  char input[]{"/home/user/hello.cpp"};
  char *output = std::strrchr(input, '/');
  if (output) {
    std::cout << output + 1
              << std::endl; // +1 because we want to start printing past the
                            // character found by std::strrchr
  }

  // Concatenation
  std::cout << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "Concat string" << std::endl;
  char dest[]{"Hello"};
  char src[]{"World!"};
  std::strcat(dest, src);
  std::strcat(dest, " Goodbye World!");
  std::cout << "dest: " << dest << std::endl;

  std::cout << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "Concat n string" << std::endl;
  char dest2[]{"Hello"};
  char src2[]{"There is a bird on my window!"};
  std::strncat(dest2, src2, 5);
  std::cout << "dest: " << dest2 << std::endl;

  // Copy string
  std::cout << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "Copy string" << std::endl;
  const char *source3 = "C++ is a multipurpose programming language";
  char *dest3 =
      new char[std::strlen(source3) +
               1]; // +1 because for the null character, strlen function is not
                   // going to count the null character '\0' for you
  std::strcpy(dest3, source3);

  std::cout << "sizeof(dest3): " << sizeof(dest3) << std::endl;
  std::cout << "std::strlen(dest3): " << std::strlen(dest3) << std::endl;
  std::cout << "dest3: " << dest3 << std::endl;
  // Copy number of string std::strncpy;

  // Dynamic Array
  char *c_char = new char[]{'H', 'e', 'l', 'l', 'o', '\0'};
  // Including the null character
  char *c_copy_char = new char[std::strlen(c_char) + 1];

  // String type in C++
  // Empty String
  std::string s_string;
  std::string s_string2{"Hello World"};
  std::string s_pref_string{s_string2};
  std::string weird_message{4, 'e'}; // initialize a copy of eeee

  std::string saying_hello{
      s_string2, 6,
      5}; // initialize with part of an existing std::string starting at index
          // 6, taking 5 character. Will contain World

  return 0;
}
