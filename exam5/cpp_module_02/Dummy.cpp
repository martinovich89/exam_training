#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}

Dummy::Dummy(const Dummy &other) : ATarget::ATarget(other)
{
	
}

Dummy::~Dummy()
{

}

Dummy *Dummy::clone() const
{
	Dummy *ret = new Dummy(*this);
	std::cout << ret->type << std::endl;
	return (ret);
}
