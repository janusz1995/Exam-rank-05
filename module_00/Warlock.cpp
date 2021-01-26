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

std::string const &Warlock::getName(void)const {
	return (this->name);
}

std::string const &Warlock::getTitle(void)const {
	return (this->title);
}

void Warlock::introduce(void) const {
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}
