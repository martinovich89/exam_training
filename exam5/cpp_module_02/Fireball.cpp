#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{

}

Fireball::Fireball(const std::string &name, const std::string &effects) : ASpell(name, effects)
{

}

Fireball::Fireball(const Fireball &other) : ASpell(other)
{

}

Fireball::~Fireball()
{

}

ASpell *Fireball::clone() const
{
	return (new Fireball(*this));
}