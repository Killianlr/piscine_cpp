
#include "Contact.hpp"
#include <cstdio>

Contact::Contact(void) {

	std::cout << green << "contructeur contact called" << reset << std::endl;
}

Contact::~Contact(void) {

	std::cout << red << "destructeur contact called" << reset << std::endl;
}

std::string readInfo()
{
	std::string line;
	while (line.empty() || line.length() > 144)
	{
		std::getline(std::cin, line);
	}
	return (line);
}

void	Contact::setData(int i) {

	std::cout << i;
	
	switch (i)
	{
	case 1 :
		std::cout << blue << "first name : ";
		this->_first_name = readInfo();
		break;
	case 2 :
		std::cout << blue << "last name : ";
		this->_last_name = readInfo();
		break;
	case 3 :
		std::cout << blue << "nickname : ";
		this->_nickname = readInfo();
		break;
	case 4 :
		std::cout << blue << "phone number : ";
		this->_phone_number = readInfo();
		break;
	case 5 :
		std::cout << blue << "darkest secret : ";
		this->_darker_secret = readInfo();
		break;
	}
}
