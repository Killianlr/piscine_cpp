
#include "Zombie.hpp"

int	main(void)
{
	int	nb_zombie = 12;
	Zombie *merle = zombieHorde(nb_zombie, "merle");

	for(int i = 0; i < nb_zombie; ++i)
		merle[i].announce();

	delete [] merle;
	return (0);
}