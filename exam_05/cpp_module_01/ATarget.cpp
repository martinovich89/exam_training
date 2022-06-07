#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::~ATarget() {}

ATarget::ATarget(const ATarget &other) { *this = other }

ATarget ATarget::&operator=(const ATarget &other)
{
	this->type
}

ATarget::ATarget(const std::string &typ) type(typ)
{
}

void	ATarget::getHitBySpell(const ASpell &spell)
{
	cout << type << " has been " << spell.getEffects() << std::endl;
}

std::string ATarget::getType() const { return type; }

void    ATarget::setType(const std::string &typ) { type = typ; }