#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int	i;

	i = 0;
	horde = new Zombie[N];
	while (i < N)
		horde[i++] = Zombie(name);
	return (horde);
}