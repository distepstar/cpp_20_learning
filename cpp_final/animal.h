#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <string_view>
#include <tuple>

class Animal {
public:
  Animal() = default;
  Animal(std::string_view desc);
  virtual ~Animal();

  virtual void breathe() const;

  auto add(double a = 10, double b = 10) const {
    struct result {
      double sum;
      double a;
      double b;
    };
    return result{(a + b), a, b};
  }

protected:
  std::string m_desc;

private:
};

#endif // !ANIMAL_H
