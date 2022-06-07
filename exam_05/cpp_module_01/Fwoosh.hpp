#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>
#include <vector>

class Fwoosh : public ASpell
{
	private:
		std::string name;
		std::string effects;

	public:
		Fwoosh();
		~Fwoosh();
		Fwoosh(const ASpell &other);
		Fwoosh &operator=(const Fwoosh &other);

		Fwoosh *clone();


};