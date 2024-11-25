#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int	i;

	i = 0;
	horde = zombieHorde(5, "ZOMBIE");
	if (horde == NULL)
		return (1);
	while (i < 5)
		horde[i++].announce();
	delete[] horde;
	return (0);
}
