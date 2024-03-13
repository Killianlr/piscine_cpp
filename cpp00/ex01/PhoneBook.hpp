
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:

	Contact	contacts[7];

public:

	PhoneBook(void);
	~PhoneBook(void);


};

#endif