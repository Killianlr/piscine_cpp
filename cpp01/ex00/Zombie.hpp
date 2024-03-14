
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

		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif