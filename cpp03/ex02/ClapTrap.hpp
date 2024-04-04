
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

class ClapTrap
{
	protected:

		std::string	_name;
		int	_hitPoints = 100;
		int	_energyPoints = 100;
		int	_attackDamage = 30;

	public:

		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &tmp);
		ClapTrap	&operator=(ClapTrap &rsh);

		std::string	getName();
		int			getStat(const std::string str);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif