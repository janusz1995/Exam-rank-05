#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title):name(name), title(title) {
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::Warlock(const Warlock &warlock) {
	name = warlock.name;
	title = warlock.title;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!\n";
}

void Warlock::setTitle(const std::string &title) {
	this->title = title;
}

std::string const &Warlock::getName()const {
	return (this->name);
}

std::string const &Warlock::getTitle()const {
	return (this->title);
}

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(Aspell *aspell) {
	spellbook.learnSpell(aspell);
}

void Warlock::forgetSpell(std::string const &newName)
{
	spellbook.forgetSpell(newName);
}

void Warlock::launchSpell(std::string const &newName, const ATarget &aTarget)
{
	Aspell *tmp;
	tmp = spellbook.createSpell(newName);
	if (tmp)
		tmp->launch(aTarget);
}
