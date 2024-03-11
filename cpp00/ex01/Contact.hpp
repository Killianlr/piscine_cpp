
#ifndef CONTACT_HPP
# define CONTACT_HPP

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

#include <iostream>

class Contact
{
private:

	static int	_nbContact;

public:

	char first_name[512];
	char last_name[512];
	char nickname[512];
	char phone_number[512];
	char darker_secret[512];

	Contact(void);
	~Contact(void);

};

#endif