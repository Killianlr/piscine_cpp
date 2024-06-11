#ifndef PRESIDENTIALPARDONFORM_HPP
	#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string targ);
		PresidentialPardonForm(PresidentialPardonForm const & ref);

		~PresidentialPardonForm();

		void action() const;

		PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);
};

#endif