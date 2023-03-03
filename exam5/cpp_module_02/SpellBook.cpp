#include "SpellBook.hpp"

SpellBook::SpellBook() : spells()
{

}

SpellBook::~SpellBook()
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		delete (*it);
	}
	spells.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	int i = 0;
	if (spell)
	{
		for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++, i++)
		{
			if ((*it)->getName() == spell->getName())
				return ;
		}
		spells.push_back(spell->clone());
	}
}

void SpellBook::forgetSpell(const std::string &spell)
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
		{
			spells.pop_back();
			delete (*it);
			return ;
		}
	}
}

ASpell *SpellBook::createSpell(const std::string &spell)
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
		{
			return ((*it)->clone());
		}
	}
	return (NULL);
}
