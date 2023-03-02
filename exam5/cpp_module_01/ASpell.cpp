#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell()
{

}

// ASpell::ASpell(const ASpell &other) : name(other.name), effects(other.effects)
// {
// 
// }

ASpell::ASpell(const std::string &newName, const std::string &newEffects) : name(newName), effects(newEffects)
{
	
}

ASpell::~ASpell()
{

}

void ASpell::launch(const ATarget &target)
{
	target.getHitBySpell(*this);
}

std::string ASpell::getName() const
{
	return (name);
}

std::string ASpell::getEffects() const
{
	return (effects);
}
