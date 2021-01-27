#include "Aspell.hpp"

Aspell::Aspell() {}

Aspell::Aspell(std::string const &name, std::string const &effects) :name(name), effects(effects) {}

Aspell::Aspell(const Aspell &aspell) {
	*this = aspell;
}

Aspell &Aspell::operator=(Aspell const &aspell) {
	this->name = aspell.name;
	this->effects = aspell.effects;
	return (*this);
}

Aspell::~Aspell() {}

const std::string &Aspell::getName() const { return name; }

const std::string &Aspell::getEffects() const { return effects; }

void	Aspell::launch(const ATarget &aTarget) const {
	aTarget.getHitBySpell(*this);
}

