#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include <iostream>
#include <string>

class Player : public Person {
  friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
  Player() = default;
  Player(std::string &game_program);
  ~Player();

private:
  std::string m_game{"None"};
};

#endif // PLAYER_H
