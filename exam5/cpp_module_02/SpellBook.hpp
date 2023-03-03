#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

class SpellBook
{
	protected :
		std::vector<ASpell *> spells;

	public :
		SpellBook();
		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &other);
		~SpellBook();

		void learnSpell(ASpell *);
		void forgetSpell(const std::string &spell);
		ASpell *createSpell(const std::string &spell);
};
