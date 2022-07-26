#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
public:
  Rectangle() = default;
  Rectangle(double width, double height, std::string_view desc);
  virtual ~Rectangle() = default;

public:
  virtual double perimeter() const override { return (2 * m_w + 2 * m_h); }

  virtual double surface() const override { return (m_w * m_h); }

private:
  double m_w{0.0};
  double m_h{0.0};
};

#endif // !RECTANGLE_H
