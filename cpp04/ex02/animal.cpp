
#include "animal.hpp"

AAnimal::AAnimal()
{
	this->_type = "Animal";
	std::cout << red << "Animal" << green << " constructor no name called" << reset << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << red << "Animal" << red << " destructor called" << reset << std::endl;
}

AAnimal::AAnimal(AAnimal &tmp)
{
	this->_type = tmp._type;
}

AAnimal &AAnimal::operator=(AAnimal &eq)
{
	this->_type = eq._type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "Animal noises" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->_type);
}