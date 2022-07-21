#include "player.h"
#include "person.h"

Player::Player(std::string &game_program) : m_game(game_program) {
  m_game = game_program;
}

std::ostream &operator<<(std::ostream &out, const Player &player) {
  out << "Player: [ game: " << player.m_game
      << " names: " << player.get_first_name() << " " << player.get_last_name()
      << "]\n";
  return out;
}

Player::~Player() {}
