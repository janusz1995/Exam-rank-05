//
// Created by Iwan Skworcow on 1/26/21.
//

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy"){}

Dummy::~Dummy() {}

ATarget * Dummy::clone() const {
	return (new Dummy());
}
