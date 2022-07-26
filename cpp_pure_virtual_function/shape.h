#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
#include <string_view>

// abstract class
class Shape {
protected:
  Shape() = default;
  Shape(std::string_view desc);

public:
  virtual ~Shape() = default; // if destructor is not public, you won't be able
                              // to delete base_ptrs. SHOW THIS TO STUDENT
  // pure virtual function
  virtual double perimeter() const = 0;
  virtual double surface() const = 0;

private:
  std::string m_desc{""};
};

#endif // !SHAPE_H
