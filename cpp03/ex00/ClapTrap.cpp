#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << green << "ClapTrap no arg constructor called" << reset << std::endl;
	this->_name = "ClapTrap";
}

ClapTrap::~ClapTrap()
{
	std::cout << red << "ClapTrap destructor called" << reset << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << green << "ClapTrap string constructor called" << reset << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(ClapTrap &tmp)
{
	std::cout << green << "ClapTrap copy constructor called" << reset << std::endl;
	this->_attackDamage = tmp.getStat("AD");
	this->_energyPoints = tmp.getStat("EP");
	this->_hitPoints = tmp.getStat("HP");
	this->_name = tmp.getName();
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}

int	ClapTrap::getStat(const std::string str)
{
	if (str == "EP")
		return (this->_energyPoints);
	if (str == "AD")
		return (this->_attackDamage);
	if (str == "HP")
		return (this->_hitPoints);
	return (-1);
}

ClapTrap &ClapTrap::operator=(ClapTrap &tmp)
{
	std::cout << yellow << "ClapTrap operator = called" << reset << std::endl;
	_attackDamage = tmp._attackDamage;
	_name = tmp._name;
	this->_hitPoints = tmp._hitPoints;
	this->_energyPoints = tmp._energyPoints;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << red << this->_name << " tries to attack but can't" << reset << std::endl;
		return ;
	}
	std::cout << blue << this->_name << " attacks " << target << " who looses "
		<< this->_attackDamage << " HP." << reset << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << blue << this->_name << " takes " << amount << " damages." << reset << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << red << this->_name << " tries to repair but can't" << reset << std::endl;
		return ;
	}
	std::cout << blue << this->_name << " repairs. He gains " << amount << " hit points."
	<< reset << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}