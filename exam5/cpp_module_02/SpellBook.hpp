// #pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

class SpellBook
{
	public :
		SpellBook();
		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &other);
		~SpellBook();

		void learnSpell(ASpell *);
		void forgetSpell(std::string const &spell);
		ASpell *createSpell(std::string const &spell);
	private :
		std::vector<ASpell *> spells;
};