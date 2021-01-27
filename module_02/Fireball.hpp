#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#include "Aspell.hpp"

class Fireball : public Aspell{
public:
	Fireball();

	virtual ~Fireball();

	Aspell *clone() const;
};

#endif //FIREBALL_HPP
