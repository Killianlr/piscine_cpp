
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	try
	{
		Bureaucrat Matheo("Matheo", 1);
		ShrubberyCreationForm	ShrubberyCreationForm("Garden");
		RobotomyRequestForm		RobotomyRequestForm("Robot");
		PresidentialPardonForm	PresidentialPardonForm("Cassandre");

		std::cout << Matheo << std::endl;
		std::cout << ShrubberyCreationForm << std::endl;
		std::cout << RobotomyRequestForm << std::endl;
		std::cout << PresidentialPardonForm << std::endl;

		Matheo.executeForm(ShrubberyCreationForm);
		ShrubberyCreationForm.beSigned(Matheo);
		Matheo.executeForm(ShrubberyCreationForm);
		RobotomyRequestForm.beSigned(Matheo);
		Matheo.executeForm(RobotomyRequestForm);
		PresidentialPardonForm.beSigned(Matheo);
		Matheo.executeForm(PresidentialPardonForm);
	}
	catch (std::exception &e)
	{
	}
	return 0;
}