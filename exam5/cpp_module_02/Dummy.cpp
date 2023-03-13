#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}

Dummy::Dummy(const std::string &type) : ATarget(type)
{

}

Dummy::Dummy(const Dummy &other) : ATarget(other)
{

}

Dummy::~Dummy()
{

}

ATarget *Dummy::clone() const
{
	return new Dummy(*this);
}
