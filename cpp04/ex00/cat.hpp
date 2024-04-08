#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "animal.hpp"

class Cat : public Animal
{

	public:

		Cat();
		~Cat();
		Cat(Cat &tmp);
		Cat &operator=(Cat &eq);

		virtual void makeSound() const;
};

#endif
