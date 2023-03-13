#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::Fwoosh(const std::string &name, const std::string &effects) : ASpell(name, effects)
{

}

Fwoosh::Fwoosh(const Fwoosh &other) : ASpell(other)
{

}

Fwoosh::~Fwoosh()
{

}

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh(*this));
}

