#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

class WrongAnimal
{

	protected:

		std::string _type;

	public:

		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal &tmp);
		WrongAnimal	&operator=(WrongAnimal &eq);
		
		void makeSound() const ;
		std::string getType() const ;
};

#endif
