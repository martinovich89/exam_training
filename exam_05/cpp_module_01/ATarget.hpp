#pragma once

//#include "ASpell.hpp"
#include <iostream>
#include <string>
#include <vector>

class ASpell;

class ATarget
{
	private:
		std::string type;

	public:
		ATarget();
		virtual ~ATarget();
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);

		ATarget(const std::string &type);

		virtual ATarget *clone() const = 0;
		void	getHitBySpell(const ASpell &spell) const;

		std::string getType() const;
		void    setType(const std::string &type);
};
