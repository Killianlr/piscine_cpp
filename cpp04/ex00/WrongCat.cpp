
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal()
{
	std::cout << yellow << "WrongCat" << green << " constructor called" << reset << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << yellow << "WrongCat" << red << " destructor called" << reset << std::endl;
}

WrongCat::WrongCat(WrongCat &tmp) : WrongAnimal::WrongAnimal()
{
	this->_type = tmp._type;
}

WrongCat &WrongCat::operator=(WrongCat &eq)
{
	this->_type = eq._type;
	return (*this);
}

void	WrongCat::makeSound() const 
{
	std::cout << "Wrong Mewwwww..." << std::endl;
}
