#pragma once

#include <iostream>
#include <string>

class ASpell;

class ATarget
{
	public :
		ATarget();
		ATarget(const std::string &type);
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
		virtual ~ATarget();

		virtual ATarget *clone() const = 0;
		void getHitBySpell(const ASpell &spell) const;

		const std::string &getType() const;

	protected :
		std::string type;
};
