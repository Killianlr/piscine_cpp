#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &tmp);
		// ScavTrap &operator=(ScavTrap &tmp);

        void highFivesGuys(void) const;
};

#endif