// #pragma once

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public :
		Polymorph();
		Polymorph(const std::string &name, const std::string &effects);
		Polymorph(const Polymorph &other);
		~Polymorph();

		ASpell *clone() const;
};