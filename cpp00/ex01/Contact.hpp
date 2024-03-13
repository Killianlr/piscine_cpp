
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

	char _first_name[144];
	char _last_name[144];
	char _nickname[144];
	char _phone_number[144];
	char _darker_secret[144];

public:

	Contact(void);
	~Contact(void);

	int	setData(int i);
	int	setFirstName(void);
	int	setLastName(void);
	int	setNickName(void);
	int	setPhoneNumber(void);
	int	setDarkerSecret(void);
	int	getData(char *) const;

};

#endif