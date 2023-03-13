#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::BrickWall(const std::string &type) : ATarget(type)
{

}

BrickWall::BrickWall(const BrickWall &other) : ATarget(other)
{

}

BrickWall::~BrickWall()
{

}

ATarget *BrickWall::clone() const
{
	return new BrickWall(*this);
}