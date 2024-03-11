
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:

	Contact	contacts[8];
	int	_nbContacts;
public:

	PhoneBook(void);
	~PhoneBook(void);

	int	creat_contact(void);
};

#endif