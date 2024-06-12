#include "AForm.hpp"

AForm::AForm(std::string name, int signIt, int execIt, std::string target) : _name(name), _signIt(signIt), _execIt(execIt), _target(target)
{
	checkGrade();
	this->_signed = false;
}

AForm::~AForm()
{

}

AForm::AForm(const AForm &tmp) : _name(tmp._name), _signIt(tmp._signIt), _execIt(tmp._execIt), _target(tmp._target)
{
	*this = tmp;
}

AForm	&AForm::operator=(const AForm &eq)
{
	this->_signed = eq._signed;
	return *this;
}

void	AForm::checkGrade() const
{
	if (this->_signIt > 150 || this->_execIt > 150)
		throw GradeTooLowExcpetion();
	else if (this->_signIt < 1 || this->_execIt < 1)
		throw GradeTooHighExcpetion();
}

std::string	AForm::getName() const
{
	return this->_name;
}

bool	AForm::getSigned() const
{
	return this->_signed;
}

int		AForm::getSignIt() const
{
	return this->_signIt;
}

int		AForm::getExecIt() const
{
	return this->_execIt;
}

std::string	AForm::getTarget() const
{
	return this->_target;
}

void	AForm::beSigned(Bureaucrat &bu)
{
	try
	{
		if (bu.getGrade() > this->_signIt)
			throw GradeTooLowExcpetion();
		else if (this->_signed == true)
		{
			std::cout << "Form : " << this->_name << " is already signed" << std::endl;
			return ;
		}
		this->_signed = true;
		bu.signForm(*this);
	}
	catch(AForm::GradeTooLowExcpetion & e)
	{
		bu.signForm(*this);
	}
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->_signed || executor.getGrade() > this->_execIt)
		throw CannotExecuteFormException();
	action();
}

std::ostream	&operator<<(std::ostream &os, AForm &tmp)
{
	os << "Form's name : " << tmp.getName()
	<< ", statut : " << tmp.getSigned()
	<< ", grade need to sign it : " << tmp.getSignIt()
	<< ", grade need to exec it : " << tmp.getExecIt();
	return os;
}