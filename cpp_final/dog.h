
#ifndef DOG_H
#define DOG_H

#include "feline.h"

class Dog : public Feline {
public:
  Dog() = default;
  Dog(std::string_view fur_style, std::string_view description);

  virtual ~Dog();

  // The run  method in subclasses of dog can't be overrided
  // further, derived classes are forced to use the implementation in Dog
  virtual void run() const override final;

  virtual void bark() const;
};

#endif // !DOG_H
