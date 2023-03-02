#include "Warlock.hpp"

Warlock::Warlock(const std::string &newName, const std::string &newTitle) : name(newName), title(newTitle), spellBook()
{
	std::cout << name << ": This looks like another boring day." << std::endl;	
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
	clear();
}

void Warlock::clear()
{
	
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(const ASpell *spell)
{
	if (spell)
	{
		for (std::vector<ASpell *>::iterator it = spellBook.begin(); it != spellBook.end(); it++)
		{		
			if ((*it)->getName() == spell->getName())
				return;
		}
		spellBook.push_back(spell->clone());
	}
}

void Warlock::forgetSpell(const std::string spell)
{
	for (std::vector<ASpell *>::iterator it = spellBook.begin(); it != spellBook.end(); it++)
	{
		if ((*it)->getName() == spell)
		{
			delete (*it);
			spellBook.erase(it);
			return ;
		}
	}
}

void Warlock::launchSpell(const std::string spell, const ATarget &target)
{
	for (std::vector<ASpell *>::iterator it = spellBook.begin(); it != spellBook.end(); it++)
	{
		if ((*it)->getName() == spell)
		{
			(*it)->launch(target);
			return ;
		}
	}
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
