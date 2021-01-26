#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <string>

class Warlock {
private:
	std::string name;
	std::string title;

	Warlock();
	Warlock(const Warlock &warlock);
	Warlock &operator=(const Warlock &warlock);

public:
	Warlock(std::string name, std::string title);
	~Warlock();

	void introduce(void) const;
	void setTitle(const std::string &title);
	std::string const &getName(void)const;
	std::string const &getTitle(void)const;
};

#endif //WARLOCK_HPP