#include <concepts>
#include <iostream>

// function blueprint
// T -> generic type -> any type
// template <typename name> return type functionName(parameters)
// Function declaration
// by value
template <typename T> T maximum(T a, T b);
// template specification (specify for special type)
template <> const char *maximum<const char *>(const char *a, const char *b);
// by reference
template <typename T> T &minimum(T &a, T &b);
// Value type checking
template <typename T> void print_number(T n);

// Standard concept
// Syntax 1
// template <typename T> requires std::integral<T> T add(T a, T b);
// Syntax 1: Use type traits
// template <typename T> requires std::is_integral_v<T> T add(T a, T b);
// Syntax 2
template <std::integral T> T add(T a, T b);
// Syntax 3
// auto add(std::integral auto a, std::integral auto b);
// Syntax 4
// template<typename T> T add(T a, T b) requires std::integral<T>;

// Create own concept
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
concept Multipliable = requires(T a, T b) {
  a *b;
};

template <typename T>
concept Incrementable = requires(T a) {
  a += 1;
  ++a;
  a++;
};

// Require caluse
// Simple requirement
template <typename T>
concept TinyType = requires(T t) {
  sizeof(T) <= 4; // simple requirement : Only check syntax
};
// Nested requirement
template <typename T>
concept TinyType2 = requires(T t) {
  sizeof(T) <= 4; // simple requirement : Only check syntax
  requires sizeof(T) <=
      4; // Nested requirement : checks the if the expression is true
};
// Compound requirement
template <typename T>
concept Addable = requires(T a, T b) {
  { a + b }
  noexcept->std::convertible_to<int>; // Compound requirement
  // check if a + b is valid syntax, doesn't throw exception(optional), and the
  // result is convertible to nit(optional)
};

TinyType auto add_4(TinyType auto a, TinyType auto b) { return a + b; };
TinyType2 auto add_5(TinyType2 auto a, TinyType2 auto b) { return a + b; };
Addable auto add_6(Addable auto a, Addable auto b) { return a + b; };

// Combining concept
// Can be && / ||
template <typename T> T func(T t) requires std::integral<T> && requires(T t) {
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
}
{
  std::cout << "value: " << t << "\n";
  return (2 * t);
};

template <typename T> T func2(T t) requires std::integral<T> || requires(T t) {
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
}
{
  std::cout << "value: " << t << "\n";
  return (2 * t);
}

// simple concept implement
std::integral auto func3(std::integral auto a, std::integral auto b) {
  return a + b;
};

int main(int argc, char **argv) {
  int a{32};
  int b{42};

  double c{32.7};
  double d{42.7};

  std::string e{"hello"};
  std::string f{"world"};

  std::cout << "max(int): " << maximum(a, b) << std::endl;
  std::cout << "max(double): " << maximum(c, d) << std::endl;
  std::cout << "max(string): " << maximum(e, f) << std::endl;

  // passing pointer value
  int *p_a{&a};
  int *p_b{&b};

  std::cout << "max(ptr_int): " << *maximum(p_a, p_b)
            << std::endl; // incorrect!

  std::cout << "max(ptr_int): " << maximum(*p_a, *p_b)
            << std::endl; // correct after dereferencing!

  auto max = maximum<double>(
      c,
      d); // explicitly say that we want the double version called

  // std::cout << max << std::endl;

  std::cout << "&a: " << &a << std::endl;
  std::cout << "&b: " << &b << std::endl;
  std::cout << "min(int): " << minimum(a, b) << std::endl;

  const char *g{"Hello"};
  const char *h{"World"};

  const char *result{maximum(g, h)};
  std::cout << result << "\n";

  std::cout << "\n";

  int n_1{2};
  std::string s_1{"2"};
  const char *c_1{"2"};

  print_number(n_1);
  // print_number(s_1);
  // print_number(c_1);

  std::cout << add(a, b) << "\n";
  // constaints not satisfied
  // std::cout << add(c, d) << "\n";

  double x{67};
  double y{56};
  // Won't work with simple requirement
  std::cout << add_4(x, y) << "\n";
  // Nested requirement (will not work because double is larger than 4bytes);
  // std::cout << add_5(x, y) << "\n"
  std::cout << sizeof(add_6(x, y)) << "\n";

  int z{100};
  long long int aa{1200};
  // Pass
  func(z);
  // Not pass
  // func(aa);
  // Pass
  func2(aa);

  // not work (double + double)
  // std::cout << func3(x, y) << "\n";
  std::cout << func3(2, 5) << "\n";

  return 0;
}

// function definitions
template <typename T> T maximum(T a, T b) { return (a > b) ? a : b; }

template <typename T> T &minimum(T &a, T &b) {
  std::cout << "&a: " << &a << " &b: " << &b << " result: ";
  return (a > b) ? b : a;
}

// Specification (specifically tell the compiler that we want const char* )
template <> const char *maximum<const char *>(const char *a, const char *b) {
  return (std::strcmp(a, b) > 0) ? a : b;
}

template <typename T> void print_number(T n) {
  // similart to assert equal in java, but it will cause compile error
  static_assert(std::is_integral<T>::value,
                "Must pass in an integral argument");
  // using \n is faster tha std::endl;
  std::cout << "n: " << n << "\n";
}

// template <typename T> requires std::is_integral_v<T> T add(T a, T b) { return
// a + b; }
template <std::integral T> T add(T a, T b) { return a + b; }

// Customize concept function
// Syntax 1
template <typename T>
requires MyIntegral<T> T add_1(T a, T b) { return a + b; }
// Syntax 2
template <MyIntegral T> T add_2(T a, T b) { return a + b; }
auto add_3(MyIntegral auto a, MyIntegral auto b) { return a + b; }
