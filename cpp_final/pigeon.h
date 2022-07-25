#ifndef PIGEON_H
#define PIGEON_H

#include "bird.h"

class Pigeon : public Bird {
public:
  Pigeon() = default;
  Pigeon(std::string_view wing_color, std::string_view desc);
  virtual ~Pigeon();

  virtual void coo() const;
  // Error
  // virtual void fly() const final;
};

#endif // !PIGEON_H
