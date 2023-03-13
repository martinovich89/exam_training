#include "SpellBook.hpp"

SpellBook::SpellBook() : spells()
{

}

SpellBook::~SpellBook()
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
		delete *it;
	spells.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spell)
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
		{
			spells.erase(it);
			return ;
		}
	}
}

ASpell *SpellBook::createSpell(std::string const &spell)
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
			return ((*it)->clone());
	}
	return (NULL);
}