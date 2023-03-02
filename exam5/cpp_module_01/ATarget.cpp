#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::ATarget(const ATarget &other) : type(other.type)
{
	
}

ATarget::ATarget(const std::string &newType) : type(newType)
{
	
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
