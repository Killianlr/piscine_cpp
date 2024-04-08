#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

class Animal
{

	protected:

		std::string _type;

	public:

		Animal();
		virtual ~Animal();
		Animal(Animal &tmp);
		Animal	&operator=(Animal &eq);
		
		virtual void makeSound() const ;
		std::string getType() const ;
};

#endif
