#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{
	
}

Polymorph::Polymorph(const Polymorph &other) : ASpell(other)
{

}

Polymorph::~Polymorph()
{

}

Polymorph *Polymorph::clone() const
{
	return (new Polymorph(*this));
}
