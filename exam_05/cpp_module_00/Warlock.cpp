#include "Warlock.hpp"

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done" << std::endl;
}

Warlock::Warlock(const std::string &nam, const std::string &titl) : name(nam), title(titl)
{
    std::cout << name << ": This looks like another boring day" << std::endl;
}

void    Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

std::string Warlock::getName() const
{
    return name;
}

std::string Warlock::getTitle() const
{
    return title;
}

void    Warlock::setTitle(const std::string &titl)
{
    title = titl;
}