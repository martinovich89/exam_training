#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fireball : public ASpell
{
	public :
		Fireball();
		Fireball(const Fireball &other);
		Fireball &operator=(const Fireball &other);
		~Fireball();

		Fireball *clone() const;

};
