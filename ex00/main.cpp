#include "Zombie.hpp"

int	main(void)
{
	Zombie	*eva00;

	eva00 = newZombie("Eva00");
	randomChump("Eva01");
	eva00->announce();
	delete eva00;
	return (0);
}