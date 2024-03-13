/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:57:45 by kle-rest          #+#    #+#             */
/*   Updated: 2024/03/11 15:20:46 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string.h>

// int	find_action(char *cmd)
// {
// 	if (!strncmp(cmd, "ADD", strlen(cmd)))
// 		return (1);
// 	if (!strncmp(cmd, "SEARCH", strlen(cmd)))
// 		return (2);
// 	if (!strncmp(cmd, "EXIT", strlen(cmd)))
// 		return (3);
// 	return (0);
// }

void	created_contacts(Contact contact)
{
	(void)contact;
	return ;
}

int	phonebook(void)
{
	PhoneBook rep;

	return (0);
}

int	main(void)
{
	// char	cmd[1024];
	// int		action;

	std::cout << green << "------WELCOME IN PHONEBOOK-------" << reset << std::endl;
	std::cout << std::endl;
	std::cout << blue << "Tape : [ADD]	for add a new contact" << std::endl;
	std::cout << "Tape : [SEARCH]	for display contact list" << std::endl;
	std::cout << "Tape : [EXIT]	to exit" << reset << std::endl;
	std::cout << std::endl;
	phonebook();
	// nb_contact = 0;
	// while (1)
	// {
	// 	std::cout << yellow << "Enter a command : " << reset;
	// 	std::cin >> cmd;
	// 	action = find_action(cmd);
	// 	if (action == 3)
	// 		break ;
	// 	if (action == 2)
	// 		std::cout << red << "SEARCH" << reset << std::endl;
	// 	if (action == 1)
	// 	{
	// 		created_contacts(rep.contacts[nb_contact]);
	// 		nb_contact++;
	// 	}
	// }
	std::cout << blue << "EXIT... GOODBYE USER" << reset << std::endl;
}