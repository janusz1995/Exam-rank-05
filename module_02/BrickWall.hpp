//
// Created by Iwan Skworcow on 1/27/21.
//

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP
#include "ATarget.hpp"

class BrickWall : public ATarget{
public:
	BrickWall();
	virtual ~BrickWall();
	ATarget *clone() const;
};


#endif //BRICKWALL_HPP
