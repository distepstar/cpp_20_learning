#ifndef NURSE_H
#define NURSE_H

#include "person.h"
#include <ostream>

// public -> protected, protected -> protected, private -> private
class Nurse : protected Person {
  friend std::ostream &operator<<(std::ostream &out, const Nurse &operand);

public:
  Nurse();

  ~Nurse();
  void treat_unwell_person();
  // getter
  int get_practice_certificate_id() const;
  // setter
  void set_practice_certificate_id(int practice_certificate_id_param);

private:
  int practice_certificate_id{0};
};

#endif // !NURSE_H
