#include "Character.hpp"
#include "Materia.hpp"
#include "AMateria.hpp"

Character::Character(const char *name) : _name(name)
{
    std::cout << blue << "Character" << green << " constuctor called" << reset << std::endl;
}

Character::~Character()
{
    delete[] &this->Materias;
    std::cout << blue << "Character" << red << " destructor called" << reset << std::endl;
}

Character::Character(Character &tmp)
{
    *this = tmp;
    for (int i = 0; i < 4; ++i)
        this->Materias[i] = tmp.Materias[i]->clone();
    std::cout << blue << "Character" << green << " copy constuctor called" << reset << std::endl;
}

Character &Character::operator=(Character &eq)
{
    this->_name = eq.getName();
    for (int i = 0; i < 4; ++i)
        this->Materias[i] = eq.Materias[i]->clone();
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
    std::cout << red << "character::use" << reset << std::endl;
    this->Materias[idx]->use(target);
}