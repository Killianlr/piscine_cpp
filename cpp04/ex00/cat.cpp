
#include "animal.hpp"
#include "cat.hpp"

Cat::Cat() : Animal::Animal()
{
	std::cout << yellow << "Cat" << green << " constructor called" << reset << std::endl;
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << yellow << "Cat" << red << " destructor called" << reset << std::endl;
}

Cat::Cat(Cat &tmp) : Animal::Animal()
{
	this->_type = tmp._type;
}

Cat &Cat::operator=(Cat &eq)
{
	this->_type = eq._type;
	return (*this);
}

void	Cat::makeSound() const 
{
	std::cout << "Mewwwww..." << std::endl;
}
