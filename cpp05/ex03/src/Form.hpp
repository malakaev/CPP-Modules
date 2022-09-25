#ifndef MODULE_05_FORM_HPP
#define MODULE_05_FORM_HPP


#include <iostream>
#include "Bureaucrat.hpp"

// class Bureaucrat;

class Form
{

	private:
		const std::string	_name;
		bool				_sign;
		const int			_signGrade;
		const int			_execGrade;

	public:
		Form();

		Form(const Form & copy);

		Form(const std::string & name, const int signGrade, const int execGrade);

		virtual ~Form();

		Form &operator=(const Form & rhs);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		const std::string & getName() const;

		bool isSign() const;

		int getSignGrade() const;

		int getExecGrade() const;

		void beSigned(const Bureaucrat & bureaucrat);

		virtual void execute(Bureaucrat const & executor) const = 0;

	};

std::ostream & operator<<(std::ostream & outstr, const Form & form);


#endif
