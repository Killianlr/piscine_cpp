
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

#include <iostream>

class Zombie {

	private:

		std::string _name;

	public:

		Zombie(void);
		~Zombie(void);

		void	setName(std::string name);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif