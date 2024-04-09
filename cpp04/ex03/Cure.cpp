#include "Materia.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
    std::cout << yellow << "Cure" << green << " constructor called" << reset << std::endl;
}

Cure::~Cure()
{
    std::cout << yellow << "Cure" << red << " destructor called" << reset << std::endl;
}

Cure::Cure(Cure &tmp) : AMateria("cure")
{
    *this = tmp;
    std::cout << yellow << "Cure" << green << " copy constructor called" << reset << std::endl;
}

Cure &Cure::operator=(Cure &eq)
{
    return (*this);
}

AMateria *Cure::clone() const
{
    std::cout << yellow << "Cure" << green << " fct clone() called" << reset << std::endl;
    return (new Cure);
}

void    Cure::use(ICharacter& target)
{
    std::cout << yellow << "* heals " << target.getName() << "'s wounds *" << reset << std::endl;
}