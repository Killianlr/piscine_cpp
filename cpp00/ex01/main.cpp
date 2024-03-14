/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:57:45 by kle-rest          #+#    #+#             */
/*   Updated: 2024/03/14 13:28:18 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string.h>

int	find_action(std::string cmd)
{
	if (cmd.length() > 144)
		return (4);
	if (!cmd.compare("ADD"))
		return (1);
	if (!cmd.compare("SEARCH"))
		return (2);
	if (!cmd.compare("EXIT"))
		return (3);
	return (0);
}

int	main(void)
{
	std::string cmd;
	int		action;
	std::int16_t idx;

	std::cout << green << "------WELCOME IN PHONEBOOK-------" << reset << std::endl;
	std::cout << std::endl;
	std::cout << blue << "Tape : [ADD]	for add a new contact" << std::endl;
	std::cout << "Tape : [SEARCH]	for display contact list" << std::endl;
	std::cout << "Tape : [EXIT]	to exit" << reset << std::endl;
	std::cout << std::endl;

	PhoneBook rep;

	rep.nb_contact = -1;
	bool m = false;
	while (1)
	{
		std::cout << yellow << "Enter a command : " << reset;
		std::cin >> cmd;
		action = find_action(cmd);
		if (action == 4)
		{
			std::cout << red << "line to long" << reset << std::endl;
		}
		if (action == 3)
			break ;
		if (action == 2)
		{
			if (m)
				rep.nb_contact = 7;
			rep.print_contacts(rep.nb_contact);
			std::cout << yellow << "Enter contact index to show information : " << reset << std::endl;
			std::cin >> idx;
			rep.setIdx(idx, rep.nb_contact, m);
			rep.print_contact_info(rep.getIdx());
		}
		if (action == 1)
		{
			rep.nb_contact++;
			if (rep.nb_contact == 8)
			{
				rep.nb_contact = 0;
				m = true;
			}
			for (int j = 1; j < 6; ++j)
				rep.setData(rep.nb_contact, j);
		}
	}
	std::cout << blue << "EXIT... GOODBYE USER" << reset << std::endl;
}