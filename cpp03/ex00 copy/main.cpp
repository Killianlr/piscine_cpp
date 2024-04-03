
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap c("George");

	c.attack("Bob");
	c.attack("Bob");
	c.beRepaired(1);
	c.attack("Bob");
	c.beRepaired(1);
	c.beRepaired(1);
	return (0);
}