
# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){

	std::cout << green << "constructeur HumanB" << reset << std::endl;
}

HumanB::~HumanB(void) {

	std::cout << red << "destruceur HumanB" << reset << std::endl;
}

void	HumanB::attack(void) const {

	std::cout << yellow << this->_name << "attacks with their " << this->_type->getType() << reset << std::endl;
}

void	HumanB::setWeapon(Weapon type) {

	this->_type = new Weapon(type.getType());
}