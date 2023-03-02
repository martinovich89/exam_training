#include <iostream>
#include <string>

class Warlock
{
	private :
		std::string 	name;
		std::string		title;

	public :
		Warlock();
		Warlock(const Warlock &other);
		Warlock(const std::string &newName, const std::string &newTitle);
		Warlock &operator=(const Warlock &other);	
		~Warlock();
	
		void introduce() const;

		std::string	getName() const;
		std::string getTitle() const;

		void setTitle(const std::string &newTitle);
};

