
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
	private:

		std::string _name;
		unsigned int _hitPoint = 10;
		unsigned int _energyPoint = 10;
		unsigned int _attackDamage = 1;

	public:

		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap& operator=(const ClapTrap &rhs);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void setHitPoint(unsigned int amount, bool b);
		void setEnergyPoint();

		unsigned int getAttackDamage() const;
		unsigned int getHitPoint() const;
		unsigned int getEnergyPoint() const;
		std::string getName() const;
};

#endif