#include "ASpell.hpp"

ASpell::ASpell() : name(), effects()
{

}

ASpell::ASpell(const std::string &name, const std::string &effects) : name(name), effects(effects)
{

}

ASpell::ASpell(const ASpell &other) : name(other.name), effects(other.effects)
{

}

ASpell &ASpell::operator=(const ASpell &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

ASpell::~ASpell()
{

}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}

const std::string &ASpell::getName() const
{
	return (name);
}

const std::string &ASpell::getEffects() const
{
	return (effects);
}
