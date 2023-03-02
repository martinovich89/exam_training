#pragma once

#include <string>
#include <iostream>

class ATarget;

class ASpell
{
	protected :
		std::string name;
		std::string effects;

	public :
		ASpell();
		ASpell(const ASpell &other);
		ASpell(const std::string &newName, const std::string &newEffects);
		ASpell &operator=(const ASpell &other);
		virtual	~ASpell();

		virtual ASpell *clone() const = 0;
		virtual void launch(const ATarget &target);

		virtual std::string getName() const;
		virtual std::string getEffects() const;
};
