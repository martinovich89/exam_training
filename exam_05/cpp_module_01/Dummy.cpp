#include "Dummy.hpp"

Dummy::Dummy() : ATarget(), type("Target Practice Dummy") {}

Dummy::~Dummy() {}

Dummy::Dummy(const Dummy &other) : ATarget(other) { }

Dummy &Dummy::operator=(const Dummy &other) { this->type = other.type; return (*this); }

ATarget *Dummy::clone() const { return (new Dummy); }
