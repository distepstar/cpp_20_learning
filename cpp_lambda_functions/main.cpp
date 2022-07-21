#include <iostream>

// Lambda functions
int main(int argc, char **argv) {
  // lambda expression
  // [capture list](parameters)-> return type { // Function body }
  // lambda expression without storing in a variable will run directly
  []() -> void {
    std::cout << "This lambda function will run directly" << std::endl;
  }();

  auto func = []() { std::cout << "Hello World!" << std::endl; };
  func();

  // lambda function with parameters
  [](double a, double b) {
    std::cout << "a + b = " << a + b << std::endl;
  }(2.0, 2.2);

  // lamda function can mix with iostream for usage
  std::cout << "I'm calling lambda function: " <<
      [](double a, double b) -> int { return (a + b); }(2.0, 3.0) << std::endl;

  // Capture list
  double a{10};
  double b{20};
  // capture list is used to auto capture the outside variables
  // what we have in the labmda function is a copy
  auto func2 = [a, b]() { std::cout << "a + b = " << a + b << std::endl; };
  func2();

  int c{42};
  // it's only the copy of the outside variable, it captured the initial status
  // of the variable e.g. c = 42 -> labmda function[42]
  // capture by value
  auto func3 = [c]() { std::cout << "Inner value: " << c << std::endl; };

  for (size_t i{0}; i < 5; ++i) {
    std::cout << "Outer value: " << c << std::endl;
    func3();
    ++c;
  }

  std::cout << std::endl;

  int d{42};
  // capture by reference
  // working on the original outside value
  auto func4 = [&d]() {
    std::cout << "Inner value: " << d << " memory address: " << &d << std::endl;
  };
  for (size_t i{0}; i < 5; ++i) {
    std::cout << "Outer value: " << d << " memory address: " << &d << std::endl;
    func4();
    ++d;
  }

  std::cout << std::endl;
  // capture by pointer...?
  int e{42};
  int *p_e{&e};
  auto func5 = [p_e]() { std::cout << "Inner value: " << *p_e << std::endl; };
  for (size_t i{0}; i < 5; ++i) {
    std::cout << "Outer value: " << *p_e << std::endl;
    func5();
    ++*p_e;
  }
  // since it's directly capture the outside variable, it's not required to pass
  // by pointerl, except you are actually manipulating a pointer
  std::cout << std::endl;

  // Capture all in context
  int f{42};

  // '=' sign means capture everything by value
  auto func6 = [=]() {
    std::cout << "We can call anything here, e.g. e and f variables: e->" << e
              << ", f->" << f << std::endl;
  };
  func6();
  // '&' capture everything by reference

  auto func7 = [&]() {
    std::cout << "By refernece, e.g. &e and &f variables: e->" << &e << ", f->"
              << &f << std::endl;
  };
  func7();

  return 0;
}
