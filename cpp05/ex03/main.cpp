
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Intern	someRandomIntern;
		Bureaucrat	Boss("Boss", 1);
		AForm	*rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(Boss);
		Boss.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e)
	{
	}
	return 0;
}