#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon " << type << " created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << type << " delete" << std::endl;
	return ;
}

const std::string&	Weapon::getType(void)
{
	const std::string& typeREF = type;
	return (typeREF);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}