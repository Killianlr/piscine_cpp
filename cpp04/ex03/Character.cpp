#include "Character.hpp"
#include "Materia.hpp"
#include "AMateria.hpp"

Character::Character(const char *name) : _name(name)
{
    std::cout << blue << "Character" << green << " constuctor called" << reset << std::endl;
}

Character::~Character()
{
    std::cout << blue << "Character" << red << " destructor called" << reset << std::endl;
}

Character::Character(Character &tmp)
{
    *this = tmp;
    std::cout << blue << "Character" << green << " copy constuctor called" << reset << std::endl;
}

Character &Character::operator=(Character &eq)
{
    this->_name = eq.getName();
    return (*this);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{

}

void    Character::unequip(int idx)
{

}

void    Character::use(int idx, ICharacter &target)
{

}