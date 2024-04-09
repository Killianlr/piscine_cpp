#include "Materia.hpp"
#include "Ice.hpp"


Ice::Ice() : AMateria("Ice")
{
    std::cout << yellow << "Ice" << green << " constructor called" << reset << std::endl;
}

Ice::~Ice()
{
    std::cout << yellow << "Ice" << red << " destructor called" << reset << std::endl;
}

Ice::Ice(Ice &tmp) : AMateria("Ice")
{
    *this = tmp;
    std::cout << yellow << "Ice" << green << " copy constructor called" << reset << std::endl;
}

Ice &Ice::operator=(Ice &eq)
{
    return (*this);
}

AMateria *Ice::clone() const
{
    std::cout << yellow << "Ice" << green << " fct clone() called" << reset << std::endl;
    return (new Ice);
}

void    Ice::use(ICharacter& target)
{
    std::cout << yellow << "* shoots an ice bolt at " << target.getName() << " *" << reset << std::endl;
}