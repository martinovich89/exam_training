#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class Dummy : public ATarget
{
	public :
		Dummy();
		Dummy(const Dummy &other);
		Dummy &operator=(const Dummy &other);
		~Dummy();

		Dummy *clone() const;

	// protected :
	// 	std::string type;
};
