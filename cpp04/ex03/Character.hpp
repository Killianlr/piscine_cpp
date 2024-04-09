#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class   Character : public ICharacter
{

    private:

        std::string _name;
        AMateria    *Materias[4];

    public:

        Character(const char *name);
        ~Character();
        Character(Character &tmp);
        Character &operator=(Character &eq);
        
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif