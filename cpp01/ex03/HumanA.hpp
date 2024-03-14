
#ifndef HUMANA_HPP
# define HUMANA_HPP

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:

		std::string _name;
		Weapon&		_type;

	public:
	
		HumanA(std::string name, Weapon& type);
		~HumanA();

		void	attack(void) const;
};

#endif