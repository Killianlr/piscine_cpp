#ifndef BUREAUCRAT_HPP
	#define BUREAUCRAT_HPP

	#include <string>
	#include <iostream>
	#include <ostream>
	#include "AForm.hpp"

	class	AForm;

	class	Bureaucrat
	{
		public:
			Bureaucrat(std::string name, int grade);
			~Bureaucrat();
			Bureaucrat(Bureaucrat &tmp);
			Bureaucrat &operator=(Bureaucrat &eq);

			void				checkGrade(int newGrade);
			void				upgrade();
			void				downgrade();
			const std::string	getName() const;
			int					getGrade() const;

			class GradeTooHighExcpetion : public std::exception
			{
				public:
					GradeTooHighExcpetion();
			};

			class GradeTooLowExcpetion : public std::exception
			{
				public:
					GradeTooLowExcpetion();
			};

			void	signForm(AForm &AForm) const;
			void	executeForm(AForm const & form);

		private:
			const std::string	_name;
			int					_grade;
	};

	std::ostream &operator<<(std::ostream &output, Bureaucrat &tmp);

#endif