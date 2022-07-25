#include "feline.h"

Feline::Feline(const std::string &fur_style, const std::string &desc)
    : Animal(desc), m_fur_style(fur_style) {}

Feline::~Feline() { std::cout << "Destructor called from Feline\n"; }

void Feline::run() const {}
