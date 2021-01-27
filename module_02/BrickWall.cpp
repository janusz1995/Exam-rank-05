//
// Created by Iwan Skworcow on 1/27/21.
//

#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::~BrickWall(){}

ATarget *BrickWall::clone() const {
	return (new BrickWall(*this));
}
