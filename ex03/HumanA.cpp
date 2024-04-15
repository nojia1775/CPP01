#include "HumanA.hpp"

HumanA::HumanA(void) : name(""), weapon(*new Weapon("")) {};

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {};

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}