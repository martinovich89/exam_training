#pragma once

#include <iostream>
#include <string>
#include <vector>

class Warlock
{
    private:
        std::string name;
        std::string title;

    public:
        Warlock();
        ~Warlock();
        Warlock(const Warlock &other);
        Warlock &operator=(const Warlock &other);

        Warlock(const std::string &name, const std::string &title);

        void    introduce() const;

        std::string getName() const;
        std::string getTitle() const;

        void    setTitle(const std::string &title);
};