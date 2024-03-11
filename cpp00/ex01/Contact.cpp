
#include "Contact.hpp"

Contact::Contact(void) {

	std::cout << green << "contructeur contact called" << reset << std::endl;

	std::cout << green << "first name : " << reset;
	std::cin >> this->first_name;

	std::cout << green << "last name : " << reset;
	std::cin >> this->last_name;

	std::cout << green << "nickname : " << reset;
	std::cin >> this->nickname;

	std::cout << green << "phone number : " << reset;
	std::cin >> this->phone_number;

	std::cout << green << "darker secret : " << reset;
	std::cin >> this->darker_secret;

	Contact::_nbContact += 1;
}

Contact::~Contact(void) {

	std::cout << red << "destructeur contact called" << reset << std::endl;
	Contact::_nbContact -= 1;
}

int	Contact::_nbContact = 0;