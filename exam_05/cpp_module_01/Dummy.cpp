#include "Dummy.hpp"

Dummy::Dummy() : type("Target Practice Dummy") {}

Dummy::~Dummy() {}

Dummy::Dummy(const Dummy &other) { *this = other; }

Dummy &Dummy::operator=(const Dummy &other) { this->type = other.type; }

Dummy *clone() { return (new Dummy); }