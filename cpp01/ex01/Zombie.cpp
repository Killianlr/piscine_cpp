
#include "Zombie.hpp"

Zombie::Zombie(void) {

	std::cout << blue << "constructeur zombie" << reset << std::endl;
}

Zombie::~Zombie(void) {

	std::cout << blue << "destructeur zombie name : " << green << this->_name << reset << std::endl;
}

void	Zombie::announce(void) {

	std::cout << green << this->_name << " : " << red << "BraiiiiiiinnnzzzZ..." << reset << std::endl;
}

void	Zombie::setName(std::string name) {
	
	this->_name = name;
}