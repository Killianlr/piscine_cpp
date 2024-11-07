
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:

	Contact	contacts[8];
	int16_t _idx;

public:

	PhoneBook(void);
	~PhoneBook(void);

	int	nb_contact;
	void	setData(int index, int data);
	void	print_contacts(int nb_contacts) const;
	void	setIdx(int16_t v, int nb_contact, bool m);
	int16_t	getIdx(void) const ;
	void	print_contact_info(int16_t idx) const;
};

#endif