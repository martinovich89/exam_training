#include "Fwoosh.hpp"
#include <iostream>
#include <string>
#include <vector>

Fwoosh::Fwoosh() : name("Fwoosh"), effects("Fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}

ASpell *Fwoosh::clone() const
{
	Fwoosh *ptr = new Fwoosh;
	return (ptr);
}