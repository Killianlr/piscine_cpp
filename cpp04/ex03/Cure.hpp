#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class   Cure : public AMateria
{

	private :
    public:

        Cure();
        ~Cure();
        Cure(Cure &tmp);
        Cure &operator=(Cure &eq);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif