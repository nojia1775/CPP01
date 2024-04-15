#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
	std::cout << name << " created" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << name << " deleted"<< std::endl;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}