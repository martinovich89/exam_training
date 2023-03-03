#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	protected :
		// std::string name;
		// std::string effects;

	public : 
		Fwoosh();
		Fwoosh(const Fwoosh &other);
		Fwoosh &operator=(const Fwoosh &other);
		~Fwoosh();

		Fwoosh *clone() const;

		std::string getName() const;
		std::string getEffects() const;
};
