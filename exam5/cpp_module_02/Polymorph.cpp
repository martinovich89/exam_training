#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{

}

Polymorph::Polymorph(const std::string &name, const std::string &effects) : ASpell(name, effects)
{

}

Polymorph::Polymorph(const Polymorph &other) : ASpell(other)
{

}

Polymorph::~Polymorph()
{

}

ASpell *Polymorph::clone() const
{
	return (new Polymorph(*this));
}
