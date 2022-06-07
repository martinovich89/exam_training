#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>
#include <vector>

class ATarget
{
	private:
		std::string type;

	public:
		ATarget();
		~ATarget();
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);

		ATarget(const std::string &type);

		virtual ATarget *clone() = 0;
		void	getHitBySpell(const ASpell &spell);

		std::string getType() const;
		void    setType(const std::string &type);
};