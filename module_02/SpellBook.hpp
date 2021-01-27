#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include <vector>
#include "Aspell.hpp"

class SpellBook{
private:
	std::vector<Aspell *> arr;

	SpellBook(SpellBook const &spellBook);
	SpellBook &operator=(SpellBook const &spellBook);
public:
	SpellBook();
	void learnSpell(Aspell *aspell);
	void forgetSpell(std::string name);
	Aspell* createSpell(std::string const &name);
	virtual ~SpellBook();
};


#endif //SPELLBOOK_HPP
