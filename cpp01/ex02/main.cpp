
#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "address brain : " << &brain << std::endl;
	std::cout << "address stringPTR : " << stringPTR << std::endl;
	std::cout << "address stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "value brain : " << brain << std::endl;
	std::cout << "value stringPTR : " << *stringPTR << std::endl;
	std::cout << "value stringREF : " << stringREF << std::endl;

	return (0);
}