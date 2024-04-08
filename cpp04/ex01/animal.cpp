
#include "animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << red << "Animal" << green << " constructor no name called" << reset << std::endl;
}

Animal::~Animal()
{
	std::cout << red << "Animal" << red << " destructor called" << reset << std::endl;
}

Animal::Animal(Animal &tmp)
{
	this->_type = tmp._type;
}

Animal &Animal::operator=(Animal &eq)
{
	this->_type = eq._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal noises" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}