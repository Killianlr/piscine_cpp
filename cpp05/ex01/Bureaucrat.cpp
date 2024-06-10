#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	checkGrade(grade);
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat &tmp) : _name(tmp._name)
{
	*this = tmp;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &eq)
{
	this->_grade = eq._grade;
	return *this;
}

void	Bureaucrat::checkGrade(int newGrade)
{
	if (newGrade < 1)
		throw GradeTooHighExcpetion();
	if (newGrade > 150)
		throw GradeTooLowExcpetion();
}

void	Bureaucrat::upgrade()
{
	_grade--;
	if (_grade < 1)
		throw GradeTooHighExcpetion();
}

void	Bureaucrat::downgrade()
{
	_grade++;
	if (_grade > 150)
		throw GradeTooLowExcpetion();
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bu)
{
	os << bu.getName() << ", bureaucrat grade " << bu.getGrade();
	return os;
}

Bureaucrat::GradeTooHighExcpetion::GradeTooHighExcpetion()
{
	std::cout << "bureaucrat GradeTooHigh !!!" <<	std::endl;
}

Bureaucrat::GradeTooLowExcpetion::GradeTooLowExcpetion()
{
	std::cout << "Bureaucrat GradeTooLow !!!" <<	std::endl;
}

void	Bureaucrat::signForm(Form &form) const
{
	if (form.getSigned() == true)
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << this->_name << " couldn't sign " << form.getName()
		<< " because " << this->_name << "'s grade is " << this->_grade
		<< " but it's required to be at grade " << form.getSignIt()
		<< " minimum to sign it !" << std::endl;
	}

}