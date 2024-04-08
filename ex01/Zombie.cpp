#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Create " << name << std::endl;
}

Zombie::Zombie(void)
{
	this->name = ".......";
	std::cout << "Create a zombie" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Delete " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}