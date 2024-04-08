
#include "Brain.hpp"

void	Brain::_fillBrain()
{
	for(int i = 0; i < 100; ++i)
		_ideas[i] = "add idea";
}

Brain::Brain()
{
	std::cout << yellow << "Brain" << green << " constructor called" << reset << std::endl;
	this->_fillBrain();
}

Brain::~Brain()
{
	std::cout << yellow << "Brain" << red << " destructor called" << reset << std::endl;
}

Brain::Brain(Brain &tmp)
{
	*this = tmp;
}

Brain &Brain::operator=(Brain &eq)
{
	for(int i = 0; i < 100; ++i)
		this->_ideas[i] = eq._ideas[i];
	return (*this);
}
