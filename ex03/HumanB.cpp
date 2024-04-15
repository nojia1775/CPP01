#include "HumanB.hpp"

HumanB::HumanB(void)
{
	return ;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB(void)
{
	if (weapon)
		delete weapon;
}

void	HumanB::setWeapon(Weapon new_weapon)
{
	this->weapon = new Weapon(new_weapon.getType());
}

void	HumanB::attack(void)
{
	if (!weapon)
		std::cout << name  << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}