#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Dummy : public ATarget
{
	public :
		Dummy();
		Dummy(const std::string &type);
		Dummy(const Dummy &other);
		~Dummy();

		ATarget *clone() const;
		void getHitBySpell(const ASpell &spell) const;
};
