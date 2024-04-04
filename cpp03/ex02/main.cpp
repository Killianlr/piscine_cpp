
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap1;
	ClapTrap clap2("George");

	ScavTrap scav1;
	ScavTrap scav2("Bender");
	
	FragTrap frag1;
	FragTrap frag2("FragGuy");
	
	for (int i = 0; i < 4; ++i)
		scav1.attack("random +1");
	scav1.beRepaired(7);
	clap2.attack("bob");
	scav2.attack("George");
	scav2.beRepaired(2);
	scav2.guardGate();
	clap1.attack("random +1");
	frag1.attack("George");
	frag1.attack("Zach");
	frag2.attack("bob");
	frag1.beRepaired(70);
	frag2.highFivesGuys();
	return (0);
}