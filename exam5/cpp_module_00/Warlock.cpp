#include "Warlock.hpp"

Warlock::Warlock(const std::string &newName, const std::string &newTitle) : name(newName), title(newTitle)
{
	std::cout << name << ": This looks like another boring day." << std::endl;	
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

std::string Warlock::getName() const
{
	return (name);
}

std::string Warlock::getTitle() const
{
	return (title);
}

void Warlock::setTitle(const std::string &newTitle)
{
	title = newTitle;
}
