#ifndef CAT_H
#define CAT_H

#include "feline.h"

class Cat final : public Feline {
  Cat() = default;
  Cat(std::string_view fur_style, std::string_view desc);

  virtual ~Cat();

  virtual void miaw() const;

  virtual void run() const override;
};

#endif // !CAT_H
