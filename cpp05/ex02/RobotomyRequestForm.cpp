#include "RobotomyRequestForm.hpp"
#include <stdlib.h> 
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string targ) : AForm("RobotomyRequestForm", 72, 45, targ)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs) : AForm(rhs)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::action() const
{
	srand (time(NULL));
	std::cout << "*VzzZZZZZzzzZz BizzZZzz BizzZZ KLONG KLUNG*" << std::endl;
	if (rand() % 2 == 1)
		std::cout << "Robotmy has been a success. Welcome num : " << rand() << std::endl;
	else
		std::cout << "Robotomy has failed. Good bye HUMAN." << std::endl; 
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
	this->AForm::operator=(rhs);
	return (*this);
}