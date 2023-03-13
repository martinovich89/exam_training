#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() : targets()
{

}

TargetGenerator::~TargetGenerator()
{
	for (std::vector<ATarget *>::iterator it = targets.begin(); it != targets.end(); it++)
		delete *it;
	targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	for (std::vector<ATarget *>::iterator it = targets.begin(); it != targets.end(); it++)
	{
		if ((*it)->getType() == target->getType())
		{
			return ;
		}
	}
	targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
	for (std::vector<ATarget *>::iterator it = targets.begin(); it != targets.end(); it++)
	{
		if ((*it)->getType() == type)
		{
			targets.erase(it);
			return ;
		}
	}
}

ATarget *TargetGenerator::createTarget(std::string const &type)
{
	for (std::vector<ATarget *>::iterator it = targets.begin(); it != targets.end(); it++)
	{
		if ((*it)->getType() == type)
			return ((*it)->clone());
	}
	return (NULL);
}