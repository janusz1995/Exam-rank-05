#include "module_02/Fwoosh.hpp"
#include "module_02/Dummy.hpp"
#include "module_02/Warlock.hpp"
#include "module_02/Polymorph.hpp"
#include "module_02/BrickWall.hpp"
#include "module_02/Fireball.hpp"
#include "module_02/TargetGenetator.hpp"

//int main(void) {
//
//	return (0);
//}

int main()
{
	Warlock richard("Richard", "foo");
	richard.setTitle("Hello, I'm Richard the Warlock!");
	BrickWall model1;

	Polymorph* polymorph = new Polymorph();
	TargetGenerator tarGen;

	tarGen.learnTargetType(&model1);
	richard.learnSpell(polymorph);

	Fireball* fireball = new Fireball();

	richard.learnSpell(fireball);

	ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

	richard.introduce();
	richard.launchSpell("Polymorph", *wall);
	richard.launchSpell("Fireball", *wall);
}
