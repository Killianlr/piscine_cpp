#ifndef ROBOTOMYREQUESTFORM_HPP
	#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string targ);
		RobotomyRequestForm(RobotomyRequestForm const & ref);

		~RobotomyRequestForm();

		void action() const;
		
		RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);
};

#endif