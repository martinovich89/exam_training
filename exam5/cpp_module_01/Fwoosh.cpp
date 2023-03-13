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

// Fwoosh &Fwoosh::operator=(const Fwoosh &other)
// {
// 	if (&other != this)
// 		ASpell::operator=(other);
//	return (*this);
// }

Fwoosh::~Fwoosh()
{

}

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh(*this));
}

// void launch(const ATarget &target) const
// {
// 	target
// }
