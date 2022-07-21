#include <iostream>
#include <numbers>

#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {

private:
  // std::string *cylinder_name;
  double base_radius{1.0};
  double height{1.0};

public:
  // constructor
  Cylinder() = default;
  Cylinder(double radius_param, double height_param);

  // Destructor
  // ~Cylinder();
  // Can also declare and implement in here: syntax commented out below:
  // ~Cylinder(){
  //   delete cylinder_name;
  //   std::cout << "Cylinder destructor called for " << cylinder_name << "\n";
  // }

  double get_base_radius();

  void set_base_radius(double radius_param);

  double get_height();

  void set_height(double height_param);

  double volume();
};

#endif // !CYLINDER_H
