//
// Created by Iwan Skworcow on 1/27/21.
//

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : Aspell("Fwoosh","fwooshed"){}

Fwoosh::~Fwoosh() { }

Aspell *Fwoosh::clone() const {
	return (new Fwoosh());
}