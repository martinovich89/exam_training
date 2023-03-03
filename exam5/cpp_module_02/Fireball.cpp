#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{

}

Fireball::Fireball(const Fireball &other) : ASpell(other)
{

}

Fireball::~Fireball()
{

}

Fireball *Fireball::clone() const
{
	return (new Fireball(*this));
}
