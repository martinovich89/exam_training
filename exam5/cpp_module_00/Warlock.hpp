#include <iostream>
#include <string>

class Warlock
{
	public :
		Warlock();
		Warlock(const std::string &name, const std::string &title);
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
		~Warlock();

		void introduce() const;

		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &newTitle);

	private :
		std::string name;
		std::string title;
};
