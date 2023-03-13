#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() : type()
{

}

ATarget::ATarget(const std::string &type) : type(type)
{

}

ATarget::ATarget(const ATarget &other) : type(other.type)
{

}

ATarget &ATarget::operator=(const ATarget &other)
{
	if (&other != this)
		*this = other;
	return (*this);
}

ATarget::~ATarget()
{

}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

const std::string &ATarget::getType() const
{
	return (type);
}
