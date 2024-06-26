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
		FragTrap &operator=(FragTrap &tmp);

        void highFivesGuys(void) const;
};

#endif