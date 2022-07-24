#include "library.h"

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
  // Constructors
  Shape() = default;
  Shape(const std::string_view description_param);
  Shape(const Shape &shape);
  // Destructor
  ~Shape();

  // Methods
  // virtual -> dynamic binding
  virtual void draw() const;

protected:
  std::string description{"None"};
};

#endif // !SHAPE_H
