#include <iostream>
#include <numbers>

#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
private:
  double base_radius{1.0};
  double height{1.0};

public:
  Cylinder() {
    base_radius = 2.0;
    height = 2.0;
  }

  Cylinder(double radius_param, double height_param) {
    base_radius = radius_param;
    height = height_param;
  }

  double get_base_radius() { return base_radius; }

  void set_base_radius(double radius_param) { base_radius = radius_param; }

  double get_height() { return height; }

  void set_height(double height_param) { height = height_param; }

  double volume() {
    return std::numbers::pi * base_radius * base_radius * height;
  }
};

#endif // !CYLINDER_H
