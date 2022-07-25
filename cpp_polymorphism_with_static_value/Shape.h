#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

class Shape {
public:
  Shape();
  Shape(const std::string &desc);
  ~Shape();

  void draw() const;

  virtual int get_count() const;

public:
  static int m_count;

protected:
  std::string m_desc;
};
#endif // SHAPE_H
