#ifndef FORM_HPP
	#define FORM_HPP

	#include <iostream>
	#include <ostream>
	#include "Bureaucrat.hpp"

	class	Bureaucrat;

	class	Form
	{
		public:
				Form(std::string name, int signIt, int execIt);
				~Form();
				Form(Form &tmp);
				Form &operator=(Form &eq);

				void		checkGrade() const;

				std::string	getName() const;
				bool		getSigned() const;
				int			getSignIt() const;
				int			getExecIt() const;

				class GradeTooHighExcpetion : public std::exception
				{
					public:
						GradeTooHighExcpetion() {std::cout << "Form Too High Exception !!!" << std::endl;}
				};

				class GradeTooLowExcpetion : public std::exception
				{
					public:
						GradeTooLowExcpetion() {std::cout << "Form Too Low Exception !!!" << std::endl;}
				};

				void	beSigned(Bureaucrat &bu);

		private:
			const std::string	_name;
			bool				_signed;
			const int			_signIt = 150;
			const int			_execIt = 150;
	};

	std::ostream &operator<<(std::ostream &os, Form &tmp);

#endif