#include "ASpell.hpp"
#include "Warlock.hpp"

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done" << std::endl;
}

Warlock::Warlock(const std::string &nam, const std::string &titl) : name(nam), title(titl)
{
    std::cout << name << ": This looks like another boring day" << std::endl;
}

void    Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	spells.push_back(spell);
}

void	Warlock::forgetSpell(std::string spell)
{
	typedef typename std::vector<ASpell *>::iterator iter;
	for (iter it = spells.begin(); it != spells.end(); it++)
	{
		if (spell == (*it)->getName())
			spells.erase(it);
	}
}

void	Warlock::launchSpell(std::string spell, ATarget &target)
{
	typedef typename std::vector<ASpell *>::iterator iter;
	for (iter it = spells.begin(); it != spells.end(); it++)
	{
		if (spell == (*it)->getName())
			target.getHitBySpell(*(*it));
	}
}

std::string Warlock::getName() const
{
    return name;
}

std::string Warlock::getTitle() const
{
    return title;
}

void    Warlock::setTitle(const std::string &titl)
{
    title = titl;
}