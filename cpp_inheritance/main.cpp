#include "engineer.h"
#include "nurse.h"
#include "person.h"
#include "player.h"
#include <iostream>
#include <string>

int main(int argc, char **argv) {

  std::string s{"Basketball"};
  // public inheritance
  Person person1("Luis", "Lei");
  Player p1(s);
  // Protected inheritance
  Nurse n1;
  // Private inheritance
  Engineer e1;
  Engineer e2("Louis Lei", 22, "Duncan Street", 22);
  Engineer e3(e2);
  // Inheritance constuctor
  Engineer e4("Athena Tung", 22, "Duncan Street");

  std::cout << "player: " << p1 << "\n";
  std::cout << "person: " << person1 << "\n";
  std::cout << "nurse: " << n1 << "\n";
  std::cout << "engineer: " << e1 << "\n";
  std::cout << "engineer2: " << e2 << "\n";
  std::cout << "engineer3: " << e3 << "\n";
  std::cout << "engineer4: " << e4 << "\n";

  // Reused function from parent class
  p1.Person::get_m_address();

  person1.m_full_name = "Samuel Jackson";

  // person1.m_age = 50; -> not work, protected value

  // n1.m_full_name = "Samuel Jackson"; public -> protected
  // n1.get_m_career_start_year(); -> not work in protected inheritance
  // n1.m_age = 50; -> not work, protected value

  // e1.m_full_name = "Samuel Jackson"; public -> private

  return 0;
}
