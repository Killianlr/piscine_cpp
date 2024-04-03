
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	num1("Eddy");
	ClapTrap	num2("George");
	ClapTrap	num3;
	ClapTrap	num0(num2);
	num3 = num1;

	int i = 0;
	while (i < 11)
	{
		num1.attack("somebody");
		i++;
	}
	num2.beRepaired(2);
	num3.attack("bob");
	num3.takeDamage(236);
	num3.beRepaired(1000);
	num0.attack("leon");
}