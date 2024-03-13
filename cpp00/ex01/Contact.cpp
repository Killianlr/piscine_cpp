
#include "Contact.hpp"
#include <cstdio>

Contact::Contact(void) {

	std::cout << green << "contructeur contact called" << reset << std::endl;
}

Contact::~Contact(void) {

	std::cout << red << "destructeur contact called" << reset << std::endl;
}

int	Contact::setDarkerSecret(void) {

	int i = 0;
	char c;

	std::cout << green << "darker secret : " << reset;
	
	while ((c = std::cin.get()) != '\n' && c != EOF) {
		if (i < 144) {
			this->_darker_secret[i++] = c;
		}
		else
			return (1);
	}
	return (0);
}

int	Contact::setPhoneNumber(void) {

	int i = 0;
	char c;

	std::cout << green << "phone number : " << reset;
	
	while ((c = std::cin.get()) != '\n' && c != EOF) {
		if (i < 144) {
			this->_phone_number[i++] = c;
		}
		else
			return (1);
	}
	return (0);
}

int	Contact::setNickName(void) {

	int i = 0;
	char c;

	std::cout << green << "nickname : " << reset;
	
	while ((c = std::cin.get()) != '\n' && c != EOF) {
		if (i < 144) {
			this->_nickname[i++] = c;
		}
		else
			return (1);
	}
	return (0);
}

int	Contact::setLastName(void) {

	int i = 0;
	char c;

	std::cout << green << "last name : " << reset;
	
	while ((c = std::cin.get()) != '\n' && c != EOF) {
		if (i < 144) {
			this->_last_name[i++] = c;
		}
		else
			return (1);
	}
	return (0);
}

int	Contact::setFirstName(void) {

	int i = 0;
	char c;

	std::cout << green << "first name : " << reset;
	
	while ((c = std::cin.get()) != '\n' && c != EOF) {
		if (i < 144) {
			this->_first_name[i++] = c;
		}
		else
			return (1);
	}
	return (0);
}

int	Contact::setData(int i) {

	std::cout << i;
	
	if (i == 1)
	{
		if (this->setFirstName())
			return (1);
	}
	else if (i == 2)
	{
		if (this->setLastName())
			return (1);
	}
	else if (i == 3)
	{
		if (this->setNickName())
			return (1);
	}
	else if (i == 4)
	{
		if (this->setPhoneNumber())
			return (1);
	}
	else if (i == 5)
	{
		if (this->setDarkerSecret())
			return (1);
	}
	return (0);
}
