#pragma once

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public :
		Fwoosh();
		Fwoosh(const std::string &name, const std::string &effects);
		Fwoosh(const Fwoosh &other);
//		Fwoosh &operator=(const Fwoosh &other);
		~Fwoosh();

		ASpell *clone() const;
//		void launch(const ATarget &target) const;
};
