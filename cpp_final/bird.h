#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

// cannot inherite Cat class because it's final class
// class WildCat : public Cat {};
class Bird : public Animal {
public:
  Bird() = default;
  Bird(std::string_view wing_color, std::string_view desc);
  virtual ~Bird();

  // nobody downstream is going to be able to override this method
  virtual void fly() const final;

private:
  std::string_view m_wing_color;
};

#endif // !BIRD_H
