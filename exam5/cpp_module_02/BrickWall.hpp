// #pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class BrickWall : public ATarget
{
	public :
		BrickWall();
		BrickWall(const std::string &type);
		BrickWall(const BrickWall &other);
		~BrickWall();

		ATarget *clone() const;
		void getHitBySpell(const ASpell &spell) const;
};