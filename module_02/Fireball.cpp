//
// Created by Iwan Skworcow on 1/27/21.
//

#include "Fireball.hpp"

Fireball::Fireball() : Aspell("Fireball", "burnt to a crisp"){}

Fireball::~Fireball() {}

Aspell *Fireball::clone() const {
	return (new Fireball(*this));
}
