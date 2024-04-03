
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap scav1;
	ScavTrap scav2("Bender");
	ClapTrap clap1;
	ClapTrap clap2("George");
	
	for (int i = 0; i < 4; ++i)
		scav1.attack("random +1");
	scav1.beRepaired(7);
	clap2.attack("bob");
	scav2.attack("George");
	scav2.beRepaired(2);
	scav2.guardGate();
	clap1.attack("random +1");
	return (0);
}