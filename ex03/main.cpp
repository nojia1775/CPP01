#include "HumanA.hpp"
#include "Weapon.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	w1("rifle");
	HumanA player1("player1", w1);
	player1.attack();
	w1.setType("gun");
	player1.attack();

	Weapon	w2("gun");
	HumanB player2("player2");
	player2.attack();
	player2.setWeapon(w2);
	player2.attack();
	w2.setType("rifle");
	player2.attack();
	return (0);
}