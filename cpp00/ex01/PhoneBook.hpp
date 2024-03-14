
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:

	Contact	contacts[8];
	std::int16_t _idx;

public:

	PhoneBook(void);
	~PhoneBook(void);

	int	nb_contact;
	void	setData(int index, int data);
	void	print_contacts(int nb_contacts) const;
	void	setIdx(std::int16_t v, int nb_contact, bool m);
	std::int16_t	getIdx(void) const ;
	void	print_contact_info(std::int16_t idx) const;
};

#endif