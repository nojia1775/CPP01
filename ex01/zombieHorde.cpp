#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int	i;
	
	if (N < 0)
	{
		std::cout << "Invalid number of zombies" << std::endl;
		return (NULL);
	}
	i = 0;
	horde = new Zombie[N];
	while (i < N)
		horde[i++] = Zombie(name);
	return (horde);
}
