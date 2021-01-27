#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &type) : type(type) {}

ATarget::ATarget(const ATarget &aTarget) { *this = aTarget; }

ATarget &ATarget::operator=(ATarget const &aTarget) {
	type = aTarget.type;
	return (*this);
}

ATarget::~ATarget() { }

const std::string &ATarget::getType() const { return type; }

void ATarget::getHitBySpell(const Aspell &aspell) const {
	std::cout << this->type << " has been " << aspell.getEffects() << "!\n";
}
