#include "Materia.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << yellow << "MateriaSource" << green << " constuctor called" << reset << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << yellow << "MateriaSource" << red << " destuctor called" << reset << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &tmp)
{
    std::cout << yellow << "MateriaSource" << green << " copy constuctor called" << reset << std::endl;
    *this = tmp;
}

MateriaSource &MateriaSource::operator=(MateriaSource &eq)
{
    this->_idx = eq._idx;
    for (int i = 0; i < 4; ++i)
        this->_leanedMat[i] = eq._leanedMat[i];
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *m)
{
    if (this->_idx > 3)
    {
        std::cout << red << "can't learn new materia anymore" << reset << std::endl;
        return ;
    }
    this->_leanedMat[this->_idx] = m;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    if (!type.compare(this->_leanedMat[this->_idx]->getType()))
        return (this->_leanedMat[this->_idx]->clone());
    return (0);
}