
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat 	aude("aude", 9);

		Form		form1("form1", 10, 3);

		std::cout << form1 << std::endl;
		std::cout << aude << std::endl;
		form1.beSigned(aude);
		std::cout << form1 << std::endl;
	}
	catch (std::exception &e)
	{

	}

	return 0;
}