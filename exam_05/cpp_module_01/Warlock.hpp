#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>
#include <vector>

class Warlock
{
    private:
        std::string name;
        std::string title;
		std::vector<ASpell *> spells;

    public:
        Warlock();
        ~Warlock();
        Warlock(const Warlock &other);
        Warlock &operator=(const Warlock &other);

        Warlock(const std::string &name, const std::string &title);

        void    introduce() const;
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, ATarget &target);

        std::string getName() const;
        std::string getTitle() const;

        void    setTitle(const std::string &title);
};