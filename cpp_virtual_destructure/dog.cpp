
#include "dog.h"

void Dog::bark() const { std::cout << "Dog::bark called: Woof!\n"; }
Dog::Dog(const std::string &fur_style, const std::string &desc)
    : Feline(fur_style, desc) {}
Dog::~Dog() { std::cout << "Destructor called from Dog\n"; }
