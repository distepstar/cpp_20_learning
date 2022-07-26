#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string_view>
class Animal {

public:
  Animal() = default;
  Animal(std::string_view animal_name, std::string_view animal_color);
  ~Animal();

  virtual void run() const;

protected:
  std::string m_animal_name{""};
  std::string m_animal_color{""};
};

#endif // !ANIMAL_H
