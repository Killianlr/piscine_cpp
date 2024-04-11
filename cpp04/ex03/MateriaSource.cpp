#include "Materia.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << yellow << "MateriaSource" << green << " constuctor called" << reset << std::endl;
    _leanedMat = new AMateria*[4];
	for (int i = 0; i < 4; i++)
        this->_leanedMat[i] = NULL;	
}

MateriaSource::~MateriaSource()
{
    std::cout << yellow << "MateriaSource" << red << " destuctor called" << reset << std::endl;
	for (int i = 0; i < 4; ++i)
		if (this->_leanedMat[i])
        	delete this->_leanedMat[i];
	delete [] this->_leanedMat;
}

MateriaSource::MateriaSource(MateriaSource &tmp)
{
    std::cout << yellow << "MateriaSource" << green << " copy constuctor called" << reset << std::endl;
    *this = tmp;
}

MateriaSource &MateriaSource::operator=(MateriaSource &eq)
{
    for (int i = 0; i < 4; ++i)
        this->_leanedMat[i] = eq._leanedMat[i];
	delete [] this->_leanedMat;
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *m)
{
	std::cout << "---learn materia---" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (this->_leanedMat[i] == NULL)
    	{
			std::cout << "Materia " << m->getType() << " learned" << std::endl;
				this->_leanedMat[i] = m;
				return ;
		}
	}
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_leanedMat[i] != NULL)
    	{
    		if (type == this->_leanedMat[i]->getType())
        		return (this->_leanedMat[i]->clone());

		//ATTENTION DERNIERE MAT APPRISE
		}
	}
    return (0);
}