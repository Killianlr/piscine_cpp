
#include "animal.hpp"
#include "dog.hpp"

Dog::Dog() : Animal::Animal()
{
	std::cout << blue << "Dog" << green << " constructor called" << reset << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << blue << "Dog" << red << " destructor called" << reset << std::endl;
}

Dog::Dog(Dog &tmp) : Animal::Animal()
{
	this->_type = tmp._type;
}

Dog &Dog::operator=(Dog &eq)
{
	this->_type = eq._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woofff..." << std::endl;
}
