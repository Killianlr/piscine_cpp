#include "Character.hpp"
#include "Materia.hpp"
#include "AMateria.hpp"

Character::Character(const char *name) : _name(name)
{
    std::cout << blue << "Character" << green << " constuctor called" << reset << std::endl;
	this->_Materias = new AMateria*[4];
    for (int i = 0; i < 4; ++i)
        this->_Materias[i] = NULL;
	this->_uMaterias = NULL;
}

Character::~Character()
{
    std::cout << blue << "Character" << red << " destructor called" << reset << std::endl;
    for (int i = 0; i < 4; ++i)
        if (this->_Materias[i])
            delete this->_Materias[i];
	delete [] this->_Materias;
}

Character::Character(Character &tmp)
{
    *this = tmp;
    std::cout << blue << "Character" << green << " copy constuctor called" << reset << std::endl;
}

Character &Character::operator=(Character &eq)
{
    this->_name = eq.getName();
	this->_Materias = new AMateria*[4];
    for (int i = 0; i < 4; ++i)
        this->_Materias[i] = eq._Materias[i]->clone();
	this->_uMaterias = eq._uMaterias;
	return (*this);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (this->_Materias[i] == NULL)
		{
			this->_Materias[i] = m;
			return ;
		}
	}
	std::cout << "No more space in inventory" << std::endl;
}

void    Character::unequip(int idx)
{
	this->_uMaterias = this->_Materias[idx];
	while (this->_Materias[idx + 1] != NULL)
	{
		this->_Materias[idx] = this->_Materias[idx + 1];
		idx++;
	}
	this->_Materias[idx] = NULL;
}

void    Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || this->_Materias[idx] == NULL)
	{
		std::cout << "No materia in this slot" << std::endl;
		return ;
	}
    this->_Materias[idx]->use(target);
}