#include "Polymorph.hpp"

Polymorph::Polymorph() : Aspell("Polymorph", "turned into critter"){}

Polymorph::~Polymorph() {}

Aspell *Polymorph::clone() const
{
	return (new Polymorph(*this));
}
