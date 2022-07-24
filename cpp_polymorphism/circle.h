#ifndef CIRCLE_H
#define CIRCLE_H

#include "library.h"
#include "oval.h"

class Circle : public Oval {
public:
  Circle() = default;
  Circle(double radius, const std::string_view description);
  Circle(const Circle &circle);

  ~Circle();

  virtual void draw() const;

private:
  double m_radius{0.0};
};

#endif // !CIRCLE_H
