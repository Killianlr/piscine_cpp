
#ifndef HUMANB_HPP
# define HUMANB_HPP

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:

		std::string _name;
		Weapon		*_type;

	public:
	
		HumanB(std::string name);
		~HumanB();

		void	attack(void) const;
		void	setWeapon(Weapon &type);
};

#endif