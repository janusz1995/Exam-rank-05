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
	arr.push_back(aspell);
}

void Warlock::forgetSpell(std::string name)
{
	std::vector<Aspell*>::iterator it_b = arr.begin();
	std::vector<Aspell*>::iterator it_e = arr.end();

	while (it_b != it_e)
	{
		if ((*it_b)->getName() == name)
		{
			delete *it_b;
			it_b = arr.erase(it_b);
		}
		it_b++;
	}

}

void Warlock::launchSpell(std::string name, const ATarget &aTarget)
{
	std::vector<Aspell*>::iterator it_b = arr.begin();
	std::vector<Aspell*>::iterator it_e = arr.end();

	while (it_b != it_e)
	{
		if ((*it_b)->getName() == name)
			(*it_b)->launch(aTarget);
		it_b++;
	}
}