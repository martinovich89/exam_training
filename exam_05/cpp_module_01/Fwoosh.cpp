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

Fwoosh *Fwoosh::clone()
{
	Fwoosh *ptr = new Fwoosh;
	return (ptr);
}