#include "SpellBook.hpp"

SpellBook::SpellBook() {}

void SpellBook::learnSpell(Aspell *aspell)
{
	if (aspell)
	{
		std::vector<Aspell *>::iterator it_b = arr.begin();
		std::vector<Aspell *>::iterator it_e = arr.end();

		while (it_b != it_e)
		{
			if ((*it_b)->getName() == aspell->getName())
				return;
			it_b++;
		}
		arr.push_back(aspell->clone());
	}
}

void SpellBook::forgetSpell(std::string name)
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

Aspell* SpellBook::createSpell(std::string const &name) {
	std::vector<Aspell*>::iterator it_b = arr.begin();
	std::vector<Aspell*>::iterator it_e = arr.end();

	while (it_b != it_e)
	{
		if ((*it_b)->getName() == name)
			return *it_b;
		it_b++;
	}
	return (NULL);
}

SpellBook::~SpellBook(){
	std::vector<Aspell *>::iterator it_b = arr.begin();
	std::vector<Aspell *>::iterator it_e = arr.end();
	while (it_b != it_e)
	{
		delete *it_b;
		++it_b;
	}
	arr.clear();
}
