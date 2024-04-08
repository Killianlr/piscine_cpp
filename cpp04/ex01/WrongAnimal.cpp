
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << red << "WrongAnimal" << green << " constructor no name called" << reset << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << red << "WrongAnimal" << red << " destructor called" << reset << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &tmp)
{
	this->_type = tmp._type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &eq)
{
	this->_type = eq._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal noises" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}