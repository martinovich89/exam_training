#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ATarget.hpp"

class TargetGenerator
{
	protected :
		std::vector<ATarget *> targetGenerator;

	public :
		TargetGenerator();
		TargetGenerator(const TargetGenerator &other);
		TargetGenerator &operator=(const TargetGenerator &other);
		~TargetGenerator();

		void learnTargetType(ATarget *);
		void forgetTargetType(const std::string &type);
		ATarget *createTarget(const std::string &type);
};
