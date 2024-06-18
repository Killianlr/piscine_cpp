
#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat bu1("cassande", 50);
		std::cout << bu1 << std::endl;
		Bureaucrat bu2(bu1);
		for (int i = 0; i < 49; ++i)
			bu2.upgrade();
		std::cout << bu2 << std::endl;
		// Bureaucrat bu3("matheo", 152);
		// Bureaucrat bu4("anaelle", 0);
	}
	catch (std::exception &e)
	{

	}

	return 0;
}