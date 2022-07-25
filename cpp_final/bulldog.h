#ifndef BULLDOG_H
#define BULLDOG_H

#include "dog.h"

class BullDog : public Dog {
  BullDog() = default;
  virtual ~BullDog();

  // Will throw a compiler error
  // virtual void run() const override { std::cout << "Bulldog::run() called\n";
  // }
};

#endif // !BULLDOG_H
