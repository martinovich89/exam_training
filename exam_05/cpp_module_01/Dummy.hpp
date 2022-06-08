#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <string>
#include <vector>

class Dummy : public ATarget
{
	private:
		std::string type;

	public:
		Dummy();
		~Dummy();
		Dummy(const Dummy &other);
		Dummy &operator=(const Dummy &other);

		ATarget *clone() const;
};