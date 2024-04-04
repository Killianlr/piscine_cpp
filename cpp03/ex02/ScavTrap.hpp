#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &tmp);
		// ScavTrap &operator=(ScavTrap &tmp);

		void attack(const std::string& target);
		void guardGate();
};

#endif