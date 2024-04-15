#include "HumanA.hpp"
#include "Weapon.hpp"

int	main(void)
{
	Weapon	arme("very hard dick");
	HumanA noah("noah", arme);
	noah.attack();
	arme.setType("fist");
	noah.attack();
	return (0);
}