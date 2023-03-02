#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
	// std::cout << "Fwoosh constructor called" << std::endl;
	// std::cout << "Name: " << name << std::endl;
	// std::cout << "Effects: " << effects << std::endl;
}

Fwoosh::~Fwoosh()
{

}

Fwoosh *Fwoosh::clone() const
{
	Fwoosh *ret = new Fwoosh;	
	return (ret);
}

std::string Fwoosh::getName() const
{
	return name;
}

std::string Fwoosh::getEffects() const
{
	return effects;
}
