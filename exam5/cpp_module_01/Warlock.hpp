#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private :
		std::string 			name;
		std::string				title;
		std::vector<ASpell *>	spellBook;

	public :
		Warlock();
		Warlock(const Warlock &other);
		Warlock(const std::string &newName, const std::string &newTitle);
		Warlock &operator=(const Warlock &other);	
		~Warlock();
	
		void introduce() const;
		void learnSpell(const ASpell *spell);
		void forgetSpell(const std::string spell);
		void launchSpell(const std::string spell, const ATarget &target);
		void clear();

		std::string	getName() const;
		std::string getTitle() const;

		void setTitle(const std::string &newTitle);
};

