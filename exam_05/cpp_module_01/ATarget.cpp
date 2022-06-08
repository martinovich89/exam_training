#include "ATarget.hpp"
//#include "Warlock.hpp"
#include "ASpell.hpp"

ATarget::ATarget() {}

ATarget::~ATarget() {}

ATarget::ATarget(const ATarget &other) { *this = other; }

ATarget &ATarget::operator=(const ATarget &other)
{
	this->type = other.type;
	return (*this);
}

ATarget::ATarget(const std::string &typ) : type(typ)
{
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << type << " has been " << spell.getEffects() << std::endl;
}

std::string ATarget::getType() const { return type; }

void    ATarget::setType(const std::string &typ) { type = typ; }
