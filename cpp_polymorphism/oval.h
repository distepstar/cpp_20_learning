#ifndef OVAL_H
#define OVAL_H

#include "library.h"
#include "shape.h"

class Oval : public Shape {
public:
  Oval() = default;
  Oval(double x_radius, double y_radius, const std::string_view description);
  Oval(const Oval &oval);

  virtual ~Oval();

  // overriding method
  virtual void draw() const override;
  // overloading method
  virtual void draw(int color_depth) const;

protected:
  double get_x_rad() const;
  double get_y_rad() const;

private:
  double m_x_radius{0.0};
  double m_y_radius{0.0};
};

#endif // !OVAL_H
