#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string targ) : AForm("PresidentialPardonForm", 25, 5, targ)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) : AForm(rhs) 
{

}

PresidentialPardonForm::~PresidentialPardonForm(){

}

void	PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been pardoned by  Zaphod Beeblebrox. Glory to  Zaphod Beeblebrox !" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
	this->AForm::operator=(rhs);
	return (*this);
}