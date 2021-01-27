//
// Created by Iwan Skworcow on 1/27/21.
//

#ifndef TARGETGENETATOR_HPP
#define TARGETGENETATOR_HPP
#include <vector>
#include "ATarget.hpp"

class TargetGenerator {
private:
	std::vector<ATarget *> arr;
	TargetGenerator(TargetGenerator const &targetGenetator);
	TargetGenerator &operator=(TargetGenerator const &targetGenetator);
public:
	TargetGenerator();
	void learnTargetType(ATarget *aTarget);
	void forgetTargetType(std::string const &);
	ATarget* createTarget(std::string const &);

	virtual ~TargetGenerator();
};


#endif //TARGETGENETATOR_HPP
