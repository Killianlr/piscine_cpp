
#include "Contact.hpp"
#include <sstream> 
#include <cstdio>

int	is_empty(std::string str)
{
	for (std::size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isspace(str[i]) && str[i] != '\n' && str[i] != EOF)
			return (0);
	}
	return (1);
}

Contact::Contact(void) {

	std::cout << green << "contructeur contact called" << reset << std::endl;
}

Contact::~Contact(void) {

	std::cout << red << "destructeur contact called" << reset << std::endl;
}

std::string readInfo(std::string info)
{
	std::string line;
	
	while (line.empty() || line.length() > 144 || is_empty(line))
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cout << "EOF DETECTED"<< std::endl;
			exit(1);
		}
		std::cout << blue << info << reset;
		std::getline(std::cin, line);
	}
	return (line);
}

void	Contact::setData(int i) {
	
	switch (i)
	{
	case 1 :
		this->_first_name = readInfo("first name : ");
		break;
	case 2 :
		this->_last_name = readInfo("last name : ");
		break;
	case 3 :
		this->_nickname = readInfo("nickname : ");
		break;
	case 4 :
		this->_phone_number = readInfo("phone number : ");
		break;
	case 5 :
		this->_darker_secret = readInfo("darkest secret : ");
		break;
	}
}

void	Contact::printfInfo(void) const {

	if (this->_first_name.length() > 10)
	{
		for (int i = 0; i < 9; ++i)
			std::cout << this->_first_name[i];
		std::cout << ".|";
	}
	else
	{
		std::size_t delta = 10 - this->_first_name.length();
		while (delta--)
			std::cout << ' ';
		for (int i = 0; i < (int)this->_first_name.length(); ++i)
			std::cout << this->_first_name[i];
		std::cout << '|';
	}
	if (this->_last_name.length() > 10)
	{
		for (int i = 0; i < 9; ++i)
			std::cout << this->_last_name[i];
		std::cout << ".|";
	}
	else
	{
		std::size_t delta = 10 - this->_last_name.length();
		while (delta--)
			std::cout << ' ';
		for (int i = 0; i < (int)this->_last_name.length(); ++i)
			std::cout << this->_last_name[i];
		std::cout << '|';
	}
	if (this->_nickname.length() > 10)
	{
		for (int i = 0; i < 9; ++i)
			std::cout << this->_nickname[i];
		std::cout << ".|";
	}
	else
	{
		std::size_t delta = 10 - this->_nickname.length();
		while (delta--)
			std::cout << ' ';
		for (int i = 0; i < (int)this->_nickname.length(); ++i)
			std::cout << this->_nickname[i];
		std::cout << '|';
	}
	std::cout << std::endl;
}

std::string	Contact::getData(int i) const {

	if (i == 1)
		return this->_first_name;
	else if (i == 2)
		return this->_last_name;
	else if (i == 3)
		return this->_nickname;
	else if (i == 4)
		return this->_phone_number;
	else if (i == 5)
		return this->_darker_secret;
	return (0);
}