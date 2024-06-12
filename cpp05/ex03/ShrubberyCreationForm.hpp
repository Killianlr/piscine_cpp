#ifndef SHRUBBERYCREATIONFORM_HPP
	#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string targ);
		ShrubberyCreationForm(ShrubberyCreationForm const & ref);

		~ShrubberyCreationForm();

		void action() const;
		
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const & rhs);
		class GardeningException : public std::exception
		{
			public:
				GardeningException() {
					std::cout << "Gardening Exception !" << std::endl;
				}
		};
};

#endif