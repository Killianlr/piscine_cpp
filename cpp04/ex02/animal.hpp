#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

class AAnimal
{

	protected:

		std::string _type;

	public:

		AAnimal();
		virtual ~AAnimal();
		AAnimal(AAnimal &tmp);
		AAnimal	&operator=(AAnimal &eq);
		
		virtual void makeSound() const = 0;
		std::string getType() const ;
};

#endif
