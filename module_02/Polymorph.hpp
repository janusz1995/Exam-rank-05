//
// Created by Iwan Skworcow on 1/27/21.
//

#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP
#include "Aspell.hpp"

class Polymorph : public Aspell {
public:
	Polymorph();
	virtual ~Polymorph();

	Aspell *clone() const;
};


#endif //POLYMORPH_HPP
