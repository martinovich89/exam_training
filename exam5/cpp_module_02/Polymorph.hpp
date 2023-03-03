#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public :
		Polymorph();
		Polymorph(const Polymorph &other);
		Polymorph &operator=(const Polymorph &other);
		~Polymorph();

		Polymorph *clone() const;
};
