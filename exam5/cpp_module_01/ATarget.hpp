#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ATarget
{
	protected :
		std::string type;

	public :
		ATarget();
		ATarget(const ATarget &other);
		ATarget(const std::string &newType);
		ATarget &operator=(const ATarget &other);
		virtual ~ATarget();

		virtual ATarget *clone() const = 0;
		void getHitBySpell(const ASpell &spell) const;

		const std::string &getType() const;
};
