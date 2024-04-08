
#include "animal.hpp"
#include "dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal::Animal()
{
	std::cout << blue << "Dog" << green << " constructor called" << reset << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << blue << "Dog" << red << " destructor called" << reset << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog &tmp) : Animal::Animal()
{
	this->_type = tmp._type;
	this->_brain = new Brain(*tmp._brain);
}

Dog &Dog::operator=(Dog &eq)
{
	this->_type = eq._type;
	this->_brain = eq._brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woofff..." << std::endl;
}
