#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string.h>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{

    private:

        AMateria **_leanedMat;

    public:

        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource &tmp);
        MateriaSource &operator=(MateriaSource &eq);

        void learnMateria(AMateria *M);
        AMateria* createMateria(std::string const &type);
};

#endif