
#include "PhoneBook.hpp"
#include <string.h>

int	find_action(char *cmd)
{
	if (!strncmp(cmd, "ADD", 5))
		return (1);
	if (!strncmp(cmd, "SEARCH", 8))
		return (2);
	if (!strncmp(cmd, "EXIT", 6))
		return (3);
	return (0);
}

// int	fill_contact(Contact contact)
// {
// 	std::cout << green << "first name : " << reset;
// 	std::cin >> contact.first_name;

// 	std::cout << green << "last name : " << reset;
// 	std::cin >> contact.last_name;

// 	std::cout << green << "nickname : " << reset;
// 	std::cin >> contact.nickname;

// 	std::cout << green << "phone number : " << reset;
// 	std::cin >> contact.phone_number;

// 	std::cout << green << "darker secret : " << reset;
// 	std::cin >> contact.darker_secret;

// 	return (0);
// }

// void	print_lst_contact(char *data)
// {
// 	int	len;
// 	int	delta;

// 	len = strlen(data);
// 	if (len > 10)
// 	{
// 		for (int i = 0; i < 9 ; ++i)
// 			std::cout << data[i];
// 		std::cout << ".|";
// 	}
// 	else
// 	{
// 		delta = 10 - len;
// 		while (delta)
// 		{
// 			std::cout << ' ';
// 			delta--;
// 		}
// 		for(int i = 0; i <= len; ++i)
// 			std::cout << data[i];
// 		std::cout << '|';
// 	}

// }

PhoneBook::PhoneBook(void) {

	// char	cmd[1024];
	// int		action;
	// int		nb_contact;
	// int		index;

	// (void)index;
	// nb_contact = 0;
	std::cout << green << "contructeur phonebook called" << reset << std::endl;
	// while (1)
	// {
	// 	std::cout << yellow << "Enter a command : " << reset;
	// 	std::cin >> cmd;
	// 	action = find_action(cmd);
	// 	if (action == 3)
	// 		break ;
	// 	if (action == 2)
	// 	{
	// 		std::cout << red << "SEARCH" << reset << std::endl;
	// 		std::cout << blue << "     index|first name| last name|  nickname|" << std::endl;
	// 		// while (index <= nb_contact)
	// 		// {
	// 		// 	std::cout << blue << "         " << index << '|';
	// 		// 	print_lst_contact(contacts[index].first_name);
	// 		// 	print_lst_contact(contacts[index].last_name);
	// 		// 	print_lst_contact(contacts[index].nickname);
	// 		// 	std::cout << std::endl;
	// 		// 	index++;
	// 		// }
	// 		std::cout << reset;
	// 	}
	// 	if (action == 1)
	// 	{

	// 		if (nb_contact == 7)
	// 			nb_contact = 0;
	// 		std::cout << red << "ADD created contact" << reset << std::endl;

	// 		for(int j = 1; j < 6; ++j)
	// 		{
	// 			if (this->contacts[nb_contact].setData(j))
	// 			{
	// 				std::cout << red << "line to long" << reset << std::endl;
	// 			}
	// 		}
	// 		nb_contact++;
	// 	}
	// }
}

PhoneBook::~PhoneBook(void) {

	std::cout << red << "destructeur phonebook called" << reset << std::endl;
}

void	PhoneBook::setData(int index, int data) {

	contacts[index].setData(data);
}
