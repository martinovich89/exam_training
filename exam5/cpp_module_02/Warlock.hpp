#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
	public :
		Warlock();
		Warlock(const std::string &name, const std::string &title);
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
		~Warlock();

		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(const std::string &spell);
		void launchSpell(const std::string &spell, const ATarget &target);

		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &newTitle);

	private :
		std::string name;
		std::string title;
		SpellBook spellbook;
};
