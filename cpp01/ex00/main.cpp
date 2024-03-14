
#include "Zombie.hpp"

int	main(void)
{
	Zombie *sasha = newZombie("sasha");

	sasha->announce();

	randomChump("carl");

	delete sasha;
	return (0);
}