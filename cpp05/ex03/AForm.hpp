#ifndef AFORM_HPP
	#define AFORM_HPP

	#include <iostream>
	#include <ostream>
	#include "Bureaucrat.hpp"

	class	Bureaucrat;

	class	AForm
	{
		public:
				AForm(std::string name, int signIt, int execIt, std::string target);
				~AForm();
				AForm(const AForm &tmp);
				AForm &operator=(const AForm &eq);

				void		checkGrade() const;

				std::string	getName() const;
				bool		getSigned() const;
				int			getSignIt() const;
				int			getExecIt() const;
				std::string	getTarget() const;

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

				class CannotExecuteFormException : public std::exception
				{
				};

				void	beSigned(Bureaucrat &bu);
				void	execute(Bureaucrat const & executor) const;
				virtual void	action() const = 0;

		private:
			const std::string	_name;
			bool				_signed;
			const int			_signIt = 150;
			const int			_execIt = 150;
			std::string			_target;
	};

	std::ostream &operator<<(std::ostream &os, AForm &tmp);

#endif