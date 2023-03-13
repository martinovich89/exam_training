// #pragma once

#include "ATarget.hpp"
#include <vector>

class TargetGenerator
{
	public :
		TargetGenerator();
		TargetGenerator(const TargetGenerator &other);
		TargetGenerator &operator=(const TargetGenerator &other);
		~TargetGenerator();

		void learnTargetType(ATarget *target); // teaches a target to generator
		void forgetTargetType(std::string const &type); // forget type if known
		ATarget *createTarget(std::string const &type); // creates target of spec. type

	private :
		std::vector<ATarget *> targets;
};