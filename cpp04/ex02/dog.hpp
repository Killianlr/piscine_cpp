#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{

	private:

		Brain *_brain;

	public:

		Dog();
		~Dog();
		Dog(Dog &tmp);
		Dog &operator=(Dog &eq);

		virtual void makeSound() const ;
};

#endif
