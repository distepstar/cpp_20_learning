#ifndef FELINE_H
#define FELINE_H

#include "animal.h"

class Feline : public Animal {

public:
  Feline() = default;
  Feline(const std::string &fur_style, const std::string &desc);
  virtual ~Feline();

  virtual void run() const;

  std::string m_fur_style;
};

#endif // !FELINE_H
