/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:17:06 by kle-rest          #+#    #+#             */
/*   Updated: 2024/03/14 10:18:12 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string.h>

int	is_empty(std::string str)
{
	for (std::size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isspace(str[i]) && str[i] != '\n' && str[i] != EOF)
			return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEDDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; ++i)
		{
			std::string str(av[i]);
			if (ac == 2 && is_empty(str))
				std::cout << "* LOUD AND UNBEARABLE FEDDBACK NOISE *";
			for (int j = 0; j < (int)str.length(); ++j)
				std::cout << (char)toupper(str[j]);
		}
		std::cout << std::endl;
	}
}
