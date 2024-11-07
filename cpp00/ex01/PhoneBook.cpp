
#include "PhoneBook.hpp"
#include <string.h>

PhoneBook::PhoneBook(void) {

	std::cout << green << "contructeur phonebook called" << reset << std::endl;
}

PhoneBook::~PhoneBook(void) {

	std::cout << red << "destructeur phonebook called" << reset << std::endl;
}

void	PhoneBook::setData(int index, int data) {

	contacts[index].setData(data);
}

void	PhoneBook::print_contacts(int nb_contacts) const {

	if (nb_contacts == -1)
	{
		std::cout << red << "NOT EVEN CONTACTS REGISTED" << reset << std::endl;
		return ;
	}
	std::cout << blue << "     INDEX|FIRST NAME| LAST NAME|  NIKCNAME|" << std::endl;
	for(int i = 0; i <= nb_contacts; ++i)
	{
		std::cout << "         " << i << '|';
		contacts[i].printfInfo();
	}
}

void	PhoneBook::setIdx(int16_t v, int nb_contact, bool m) {

	if (v > 7 || v < 0)
	{
		std::cout << red << "contact : " << v << " unexiste" << reset << std::endl;
		this->_idx = -1;
	}
	else if (v > nb_contact && !m)
	{
		std::cout << red << "contact : " << v << " even unexiste" << reset << std::endl;
		this->_idx = -1;
	}
	else
		this->_idx = v;
}

int16_t PhoneBook::getIdx(void) const {

	return this->_idx;
}

void	PhoneBook::print_contact_info(int16_t idx) const {

	if (idx < 0)
		return ;
	std::cout << blue << "    *CONTACT [" << idx << "]*" << std::endl;
	std::cout << blue << "fist name : " << this->contacts[idx].getData(1) << std::endl;
	std::cout << blue << "lasr name : " << this->contacts[idx].getData(2) << std::endl;
	std::cout << blue << "nickname : " << this->contacts[idx].getData(3) << std::endl;
	std::cout << blue << "phone number : " << this->contacts[idx].getData(4) << std::endl;
	std::cout << blue << "darkest secret : " << this->contacts[idx].getData(5) << std::endl;
}
