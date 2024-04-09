
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    // std::cout << blue << "AMateria" << green << " constructor called" << reset << std::endl;
}

AMateria::~AMateria()
{
    // std::cout << blue << "AMateria" << red << " destructor called" << reset << std::endl;
}

AMateria::AMateria(AMateria &tmp) : _type(tmp._type)
{
    *this = tmp;
    // std::cout << blue << "AMateria" << green << " copy constructor called" << reset << std::endl;
}

AMateria &AMateria::operator=(AMateria &eq)
{
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    
}
