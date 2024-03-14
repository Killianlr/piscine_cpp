
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

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darker_secret;

public:

	Contact(void);
	~Contact(void);

	void	setData(int i);
	std::string	getData(int i) const;
	void	printfInfo(void) const;

};

#endif