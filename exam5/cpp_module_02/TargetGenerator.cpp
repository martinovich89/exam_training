#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() : targetGenerator()
{
	
}

TargetGenerator::~TargetGenerator()
{
	for (std::vector<ATarget *>::iterator it = targetGenerator.begin(); it != targetGenerator.end(); it++)
	{
		delete (*it);
	}
	targetGenerator.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
	{
		for (std::vector<ATarget *>::iterator it = targetGenerator.begin(); it != targetGenerator.end(); it++)
		{
			if ((*it)->getType() == target->getType())
				return ;
		}
		targetGenerator.push_back(target->clone());
	}
}

void TargetGenerator::forgetTargetType(const std::string &type)
{
	for (std::vector<ATarget *>::iterator it = targetGenerator.begin(); it != targetGenerator.end(); it++)
	{
		if ((*it)->getType() == type)
		{
			targetGenerator.pop_back();
			delete (*it);
			return ;
		}
	}
}

ATarget *TargetGenerator::createTarget(const std::string &type)
{
	for (std::vector<ATarget *>::iterator it = targetGenerator.begin(); it != targetGenerator.end(); it++)
	{
		if ((*it)->getType() == type)
		{
			return ((*it)->clone());
		}
	}
	return (NULL);
}
