#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include "Aspell.hpp"

class Fwoosh : public Aspell{
public:
	Fwoosh();

	virtual ~Fwoosh();
	virtual Aspell *clone() const;
};

#endif