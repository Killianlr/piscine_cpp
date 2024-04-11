#include "Character.hpp"
#include "Materia.hpp"
#include "AMateria.hpp"

Character::Character(const char *name) : _name(name)
{
    std::cout << blue << "Character" << green << " constuctor called" << reset << std::endl;
	Materias = new AMateria*[4];
    for (int i = 0; i < 4; ++i)
        Materias[i] = NULL;
}

Character::~Character()
{
    std::cout << blue << "Character" << red << " destructor called" << reset << std::endl;
    for (int i = 0; i < 4; ++i)
        if (this->Materias[i])
            delete this->Materias[i];
	delete [] this->Materias;
}

Character::Character(Character &tmp)
{
    *this = tmp;
    std::cout << blue << "Character" << green << " copy constuctor called" << reset << std::endl;
}

Character &Character::operator=(Character &eq)
{
    this->_name = eq.getName();
	this->Materias = new AMateria*[4];
    for (int i = 0; i < 4; ++i)
        this->Materias[i] = eq.Materias[i]->clone();    return (*this);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    std::cout << red << "character::equip" << reset << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (this->Materias[i] == NULL)
		{
			// std::cout << "Materia " << m->getType() << " equiped" << std::endl;
			this->Materias[i] = m;
			return ;
		}
	}
	std::cout << "No more space in inventory" << std::endl;
}

void    Character::unequip(int idx)
{

}

void    Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || this->Materias[idx] == NULL)
	{
		std::cout << "idx = " << idx << std::endl;
		std::cout << "No materia in this slot" << std::endl;
		return ;
	}
    std::cout << red << "character::use" << reset << std::endl;
    this->Materias[idx]->use(target);
}