
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << green << "Default constructor called" << reset << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << red << "Default destructor called" << reset << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << green << "Copy constructor called" << reset << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << yellow << "Copy assigment operator called" << std::endl;
	return (*this);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

unsigned int ClapTrap::getHitPoint() const
{
	return this->_hitPoint;
}

unsigned int ClapTrap::getEnergyPoint() const
{
	return this->_energyPoint;
}

void ClapTrap::setHitPoint(unsigned int amount, bool b)
{
	if (this->_hitPoint < amount && b)
		this->_hitPoint = 0;
	else if (b)
		this->_hitPoint -= amount;
	else if (!b)
		this->_hitPoint += amount;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->setHitPoint(amount, 1);
}

void ClapTrap::setEnergyPoint()
{
	this->_energyPoint--;
	std::cout << blue << this->_name << " still has " << this->getEnergyPoint() << " energy point!" << reset << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->getEnergyPoint() == 0)
	{
		std::cout << red << this->_name << " not has enought energy point!" << reset << std::endl;
		return ;
	}
	if (this->getHitPoint() == 0)
	{
		std::cout << red << target << " his already dead!" << reset << std::endl;
		return ;
	}
	std::cout << blue << "ClapTrap " << this->getName()
				<< " attacks " << target << " causing "
				<< this->getAttackDamage() << " point of damage!"
				<< reset << std::endl;
	this->takeDamage(this->getAttackDamage());
	this->setEnergyPoint();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoint() == 0)
	{
		std::cout << red << this->_name << " not has enought energy point!" << reset << std::endl;
		return ;
	}
	this->setHitPoint(1, 0);
	std::cout << blue << this->_name << " getting repaired, he still has " << this->getHitPoint()
				<< " hitPoint!" << reset << std::endl;
	this->setEnergyPoint();	
}