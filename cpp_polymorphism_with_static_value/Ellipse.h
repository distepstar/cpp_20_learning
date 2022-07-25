#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"
#include <iostream>
#include <string>

class Ellipse : public Shape {
public:
  Ellipse();
  Ellipse(double x_rad, double y_rad, const std::string &desc);
  ~Ellipse();

  virtual int get_count() const override;

  static int m_count;

private:
  double m_x_rad;
  double m_y_rad;
};

#endif // ELLIPSE_H
