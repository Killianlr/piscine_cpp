#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "animal.hpp"

class Dog : public Animal
{

	public:

		Dog();
		~Dog();
		Dog(Dog &tmp);
		Dog &operator=(Dog &eq);

		virtual void makeSound() const ;
};

#endif
