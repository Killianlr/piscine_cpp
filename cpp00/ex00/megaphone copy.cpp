/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:17:06 by kle-rest          #+#    #+#             */
/*   Updated: 2024/03/11 10:17:10 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEDDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < ac; ++i)
		{
			for(int c = 0; c < (int)strlen(av[i]); ++c)
			{
				if (av[i][c] >= 97 && av[i][c] <= 122)
					std::cout << static_cast<char>(toupper(av[i][c]));
				else
					std::cout << av[i][c];
			}
		}
		std::cout << std::endl;
	}
}
