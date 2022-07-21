#include "player.h"
#include <iostream>
#include <string>

int main(int argc, char **argv) {

  std::string s{"Basketball"};
  Player p1(s);

  std::cout << "player: " << p1 << "\n";

  return 0;
}
