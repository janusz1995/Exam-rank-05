#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Aspell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
private:
	std::string name;
	std::string title;

	Warlock();
	Warlock(const Warlock &warlock);
	Warlock &operator=(const Warlock &warlock);

	SpellBook spellbook;
public:
	Warlock(std::string name, std::string title);
	~Warlock();

	void introduce(void) const;
	void setTitle(const std::string &title);
	std::string const &getName(void)const;
	std::string const &getTitle(void)const;

	void learnSpell(Aspell *aspell);
	void forgetSpell(std::string const &name);
	void launchSpell(std::string const &name, ATarget const &aTarget);
};

#endif //WARLOCK_HPP
