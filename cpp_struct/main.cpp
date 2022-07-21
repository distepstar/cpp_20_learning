#include <iostream>
#include <string>

class Dog {
  std::string m_name;
};

struct Cat {
  std::string m_name;
};

struct Point {

  Point(double x, double y) {
    this->x = x;
    this->y = y;
  }

  double x;
  double y;
};

// const -> cannot change the value inside point
void print_point(const Point &point) {
  std::cout << "Point [x : " << point.x << ", y: " << point.y << "]\n";
  // point.x = 40;
}

int main(int argc, char **argv) {
  Dog dog1;
  Cat cat1;

  // Compiler error, variables inside class are private by default
  // dog1.m_name = "Fluffy";

  // Pass, variables inside struct are public by default
  cat1.m_name = "Fluffy";

  Point p(10, 20);
  print_point(p);

  return 0;
}
