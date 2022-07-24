#include "player.h"
#include "person.h"

Player::Player() { std::cout << "Player constructor is calling\n"; }

// methods
Player::Player(std::string &game_program) : m_game(game_program) {
  m_game = game_program;
}

std::ostream &operator<<(std::ostream &out, const Player &player) {
  out << "Player: [ game: " << player.m_game
      << " names: " << player.get_first_name() << " " << player.get_last_name()
      << "]\n";

  return out;
}

void Player::play() {
  m_full_name = "John Snow";
  m_age = 55; // Can be access because it's protected in super class
  // m_address = "DJIADJIOS"; // private in base class
}

// getters
int Player::get_m_career_start_year() { return m_career_start_year; }
double Player::get_m_salary() { return m_salary; }
int Player::get_health_factor() { return health_factor; }

// setters
void Player::set_m_career_start_year(int m_career_start_year_param) {
  m_career_start_year = m_career_start_year_param;
}
void Player::set_m_salary(double m_salary_param) { m_salary = m_salary_param; }
void Player::set_health_factor(int health_factor_param) {
  health_factor = health_factor_param;
}

Player::~Player() {}
