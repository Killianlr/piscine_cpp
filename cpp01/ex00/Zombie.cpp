
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

	std::cout << blue << "constructeur zombie name : " << green << name << reset << std::endl;
}

Zombie::~Zombie(void) {

	std::cout << blue << "destructeur zombie name : " << green << this->_name << reset << std::endl;
}

void	Zombie::announce(void) {

	std::cout << green << this->_name << " : " << red << "BraiiiiiiinnnzzzZ..." << reset << std::endl;
}