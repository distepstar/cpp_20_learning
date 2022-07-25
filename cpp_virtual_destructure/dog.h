#ifndef DOG_H
#define DOG_H

#include "feline.h"

class Dog : public Feline {

public:
  Dog() = default;
  Dog(const std::string &fur_style, const std::string &desc);
  virtual ~Dog();

  virtual void bark() const;
};

#endif // !DOG_H
