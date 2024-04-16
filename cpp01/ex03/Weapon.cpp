
# include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
	std::cout << green << "constructeur Weapon" << reset << std::endl;
}


Weapon::~Weapon() {
	std::cout << red << "destruceur Weapon" << reset << std::endl;
}

void	Weapon::setType(std::string type) {

	this->_type = type;
}

const std::string	&Weapon::getType(void) const {

	return (this->_type);
}

