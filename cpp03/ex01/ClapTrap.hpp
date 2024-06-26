
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
		int	_energyPoints = 50;
		int	_attackDamage = 20;

		void		attack(const std::string& target);
	public:

		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &tmp);
		ClapTrap	&operator=(ClapTrap &rsh);

		std::string	getName();
		int			getStat(const std::string str);

		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif