#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include <iostream>
#include <string>

// protected Person
// private Person -> make all the variables in Person class accessable in local,
// but not sharing to other subclasses which inherited Player class
class Player : public Person {
  friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
  Player();
  Player(std::string &game_program);
  ~Player();
  // methods
  void play();

  // getters
  int get_m_career_start_year();
  double get_m_salary();
  int get_health_factor();

  // setters
  void set_m_career_start_year(int m_career_start_year_param);
  void set_m_salary(double m_salary_param);
  void set_health_factor(int health_factor_param);

private:
  std::string m_game{"None"};
  int m_career_start_year{0};
  double m_salary{0.0};
  int health_factor{0};
};

#endif // PLAYER_H
