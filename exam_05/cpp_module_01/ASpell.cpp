#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() {}

ASpell::~ASpell() {}

ASpell::ASpell(const ASpell &other) { *this = other; }

ASpell &ASpell::operator=(const ASpell &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

ASpell::ASpell(const std::string &nam, const std::string &effect) : name(nam), effects(effect) {}

std::string ASpell::getEffects() const
{
	return (effects);
}

std::string ASpell::getName() const
{
	return (name);
}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}

