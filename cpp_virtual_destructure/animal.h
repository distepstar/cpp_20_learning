#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
public:
  Animal() = default;
  Animal(const std::string &desc);
  virtual ~Animal();
  virtual void breathe() const;

protected:
  std::string m_desc{""};
};

#endif // !ANIMAL_H
