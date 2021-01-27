#pragma once

#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class Aspell {
private:
	std::string name;
	std::string effects;
public:
	Aspell();
	Aspell(std::string const &name, std::string const &effects);
	Aspell(const Aspell &aspell);
	Aspell &operator=(Aspell const &aspell);
	virtual ~Aspell();

	const std::string &getName() const;
	const std::string &getEffects() const;

	void launch(const ATarget &aTarget) const;

	virtual Aspell *clone() const = 0;

};

#endif
