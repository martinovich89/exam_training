#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public :
		BrickWall();
		BrickWall(const BrickWall &other);
		BrickWall &operator=(const BrickWall &other);
		~BrickWall();

		BrickWall *clone() const;

};
