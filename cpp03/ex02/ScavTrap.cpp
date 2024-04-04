
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
	std::cout << yellow << "ScavTrap" << green << " no name constructor called" << reset << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << yellow << "ScavTrap" << green << " constructor called" << reset << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << yellow << "ScavTrap" << red << " destructor called" << reset << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &tmp) : ClapTrap()
{
	std::cout << yellow << "ScavTrap" << green << " copy constructor called" << reset << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << red << this->_name << " Failed to attack, maybe no more energys..." << reset << std::endl;
		return ;
	}
	std::cout << blue << this->_name << " Knock " << target << " who fall, and lost "
		<< this->_attackDamage << " HP." << reset << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate()
{
	std::cout << blue << "Im in Gate keeper mode !" << reset << std::endl;
}

// ScavTrap &ScavTrap::operator=(ScavTrap &tmp)
// {
// 	std::cout << yellow << "ScavTrap operator = called" << reset << std::endl;
// 	_attackDamage = rhs._attackDamage;
// 	_name = tmp._name;
// 	this->_hitPoints = tmp._hitPoints;
// 	this->_energyPoints = tmp._energyPoints;
// 	return (*this);
// }