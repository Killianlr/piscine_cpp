
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type) {

	std::cout << green << "constructeur HumanA" << reset << std::endl;
}

HumanA::~HumanA(void) {

	std::cout << red << "destruceur HumanA" << reset << std::endl;
}

void	HumanA::attack(void) const {

	std::cout << blue << this->_name << "attacks with their " << this->_type.getType() << reset << std::endl;
}