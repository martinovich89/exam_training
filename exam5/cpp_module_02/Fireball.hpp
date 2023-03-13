// #pragma once

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public :
		Fireball();
		Fireball(const std::string &name, const std::string &effects);
		Fireball(const Fireball &other);
		~Fireball();

		ASpell *clone() const;
};