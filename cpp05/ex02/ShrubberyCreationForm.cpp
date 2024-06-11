#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string targ) : AForm("ShrubberyCreationForm", 145, 137, targ)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs) : AForm(rhs)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

void	ShrubberyCreationForm::action() const
{
	try
	{
		std::string    shrubber =
"\n\
  .oOOo.  \n\
 .o00oOo. \n\
..oOOOoo.. \n\
.oOooOOooOo..\n\
.oOoOOOOoo. \n\
.oooOoOo.  \n\
 .O/||\\O. \n\
    ||     \n\
";
		std::string file(this->getTarget() + "_shrubbery");
		std::ofstream os (file.c_str(), std::ios_base::app);

		if (!os.is_open())
			throw ShrubberyCreationForm::GardeningException();
		os << shrubber;
	}
	catch (std::exception &e)
	{
		std::cout << "The garden {FILE} cannot be opened. The gardener is out of job now." << std::endl;
	}

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
	this->AForm::operator=(rhs);
	return (*this);
}