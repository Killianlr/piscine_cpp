
#include "animal.hpp"
#include "cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal::Animal()
{
	std::cout << yellow << "Cat" << green << " constructor called" << reset << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << yellow << "Cat" << red << " destructor called" << reset << std::endl;
	delete this->_brain;
}

Cat::Cat(Cat &tmp) : Animal::Animal()
{
	this->_type = tmp._type;
	this->_brain = new Brain(*tmp._brain);
}

Cat &Cat::operator=(Cat &eq)
{
	this->_type = eq._type;
	this->_brain = eq._brain;
	return (*this);
}

void	Cat::makeSound() const 
{
	std::cout << "Mewwwww..." << std::endl;
}
