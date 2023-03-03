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

void Warlock::learnSpell(ASpell *spell)
{
	spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string spell)
{
	spellBook.forgetSpell(spell);
}

void Warlock::launchSpell(const std::string spell, const ATarget &target)
{
	ASpell *ptr;
	ptr = spellBook.createSpell(spell);
	ptr->launch(target);
	delete ptr;
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
