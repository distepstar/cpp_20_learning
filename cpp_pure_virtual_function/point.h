#ifndef POINT_H
#define POINT_H

#include "stream_insert_table.h"

class Point : public StreamInsertTable {
public:
  Point() = default;
  Point(double x, double y) : m_x(x), m_y(y){};
  ~Point() = default;

  virtual void stream_insert(std::ostream &out) const override {
    out << "Point [x: " << m_x << " y: " << m_y << "]\n";
  }

private:
  double m_x{0.0};
  double m_y{0.0};
};

#endif // !POINT_H
