#pragma once

//#include "Warlock.hpp"
//#include "ATarget.hpp"
#include <iostream>
#include <string>
#include <vector>

class ATarget;

class ASpell
{
    private:
        std::string name;
        std::string effects;

    public:
        ASpell();
        virtual ~ASpell();
        ASpell(const ASpell &other);
        ASpell &operator=(const ASpell &other);

        ASpell(const std::string &name, const std::string &effects);

        std::string getName() const;
        std::string getEffects() const;

        void    launch(const ATarget &target) const;

        virtual ASpell *clone() const = 0;
};