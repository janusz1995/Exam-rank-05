#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>

class Aspell;

class ATarget {
private:
	std::string type;
public:
	ATarget();
	ATarget(const std::string &type);
	ATarget(const ATarget &aTarget);
	ATarget &operator=(ATarget const &aTarget);
	virtual ~ATarget();

	const std::string &getType() const;

	void getHitBySpell(Aspell const &aspell) const;

	virtual ATarget *clone() const = 0;

};

#endif //ATARGET_HPP
#include "Aspell.hpp"
