#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

	private:

		Brain *_brain;

	public:

		Cat();
		~Cat();
		Cat(Cat &tmp);
		Cat &operator=(Cat &eq);

		void makeSound() const;
};

#endif
