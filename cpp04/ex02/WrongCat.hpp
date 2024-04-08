#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		~WrongCat();
		WrongCat(WrongCat &tmp);
		WrongCat &operator=(WrongCat &eq);

		void makeSound() const;
};

#endif
