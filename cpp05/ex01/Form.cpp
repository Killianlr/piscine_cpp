#include "Form.hpp"

Form::Form(std::string name, int signIt, int execIt) : _name(name), _signIt(signIt), _execIt(execIt)
{
	checkGrade();
	this->_signed = false;
}

Form::~Form()
{

}

Form::Form(Form &tmp) : _name(tmp._name), _signIt(tmp._signIt), _execIt(tmp._execIt)
{
	*this = tmp;
}

Form	&Form::operator=(Form &eq)
{
	this->_signed = eq._signed;
	return *this;
}

void	Form::checkGrade() const
{
	if (this->_signIt > 150 || this->_execIt > 150)
		throw GradeTooLowExcpetion();
	else if (this->_signIt < 1 || this->_execIt < 1)
		throw GradeTooHighExcpetion();
}

std::string	Form::getName() const
{
	return this->_name;
}

bool	Form::getSigned() const
{
	return this->_signed;
}

int		Form::getSignIt() const
{
	return this->_signIt;
}

int		Form::getExecIt() const
{
	return this->_execIt;
}

void	Form::beSigned(Bureaucrat &bu)
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
	catch(Form::GradeTooLowExcpetion & e)
	{
		bu.signForm(*this);
	}
}

std::ostream	&operator<<(std::ostream &os, Form &tmp)
{
	os << "Form's name : " << tmp.getName()
	<< ", statut : " << tmp.getSigned()
	<< ", grade need to sign it : " << tmp.getSignIt()
	<< ", grade need to exec it : " << tmp.getExecIt();
	return os;
}