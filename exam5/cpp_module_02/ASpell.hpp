#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ASpell
{
	public :
		ASpell();
		ASpell(const std::string &name, const std::string &effects);
		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &other);
		virtual ~ASpell();

		virtual ASpell *clone() const = 0;
		void launch(const ATarget &target) const;

		const std::string &getName() const;
		const std::string &getEffects() const;

	protected :
		std::string name;
		std::string effects;
};
