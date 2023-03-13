#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : name(name), title(title), spellbook()
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

void Warlock::learnSpell(ASpell *spell)
{
	spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string &spell)
{
	spellbook.forgetSpell(spell);
}

void Warlock::launchSpell(const std::string &spell, const ATarget &target)
{
	ASpell *tolaunch = spellbook.createSpell(spell);
	if (tolaunch)
	{
		target.getHitBySpell(*tolaunch);
	}
	delete tolaunch;
}

const std::string &Warlock::getName() const
{
	return (name);
}

const std::string &Warlock::getTitle() const
{
	return (title);
}

void Warlock::setTitle(const std::string &newTitle)
{
	title = newTitle;
}
