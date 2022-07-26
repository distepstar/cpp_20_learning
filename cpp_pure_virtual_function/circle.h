#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {

public:
  Circle() = default;
  Circle(double radius, std::string_view desc);

  virtual ~Circle() = default;

  virtual double perimeter() const override { return (2 * PI * m_r); }

  virtual double surface() const override { return (PI * m_r * m_r); }

private:
  double m_r{0.0};
  double PI{3.14159265};
};

#endif // !CIRCLE_H
