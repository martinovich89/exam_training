#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <string>
#include <vector>

class ASpell
{
    private:
        std::string name;
        std::string effects;

    public:
        ASpell();
        virtual ~ASpell() = 0;
        ASpell(const ASpell &other);
        ASpell &operator=(const ASpell &other);

        ASpell(const std::string &name, const std::string &effects);

        std::string getName() const;
        std::string getEffects() const;

        void    launch(const ATarget &target);

        virtual ASpell *clone() = 0;
};