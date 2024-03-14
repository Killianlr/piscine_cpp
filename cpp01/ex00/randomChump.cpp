
#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	carl = Zombie(name);

	carl.announce();
	return ;
}