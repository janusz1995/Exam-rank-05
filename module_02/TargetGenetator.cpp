#include "TargetGenetator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	std::vector<ATarget *>::iterator it_b = arr.begin();
	std::vector<ATarget *>::iterator it_e = arr.end();

	while (it_b != it_e)
	{
		delete *it_b;
		it_b++;
	}
	arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *aT) {
	if (aT)
	{
		std::vector<ATarget *>::iterator it_b = arr.begin();
		std::vector<ATarget *>::iterator it_e = arr.end();

		while (it_b != it_e)
		{
			if ((*it_b)->getType() == aT->getType())
				return;
			++it_b;
		}
		arr.push_back(aT->clone());
	}
}

void TargetGenerator::forgetTargetType(std::string const &name) {
	std::vector<ATarget *>::iterator it_b = arr.begin();
	std::vector<ATarget *>::iterator it_e = arr.end();

	while (it_b != it_e)
	{
		if ((*it_b)->getType() == name)
		{
			delete *it_b;
			it_b = arr.erase(it_b);
		}
		++it_b;
	}
}

ATarget* TargetGenerator::createTarget(std::string const &name) {
	std::vector<ATarget *>::iterator it_b = arr.begin();
	std::vector<ATarget *>::iterator it_e = arr.end();

	while (it_b != it_e)
	{
		if ((*it_b)->getType() == name)
			return *it_b;
		++it_b;
	}
	return NULL;
}