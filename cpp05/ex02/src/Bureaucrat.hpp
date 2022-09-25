
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// #include "Form.hpp" //если включить то unknown type name 'Bureaucrat'
# include <iostream>

class Form; //если не включить то unknown type name 'Bureaucrat'

class Bureaucrat
{

	private:

		const std::string	_name;
		int					_grade;

	public:

		Bureaucrat();
		Bureaucrat(const std::string & name);
		Bureaucrat(const std::string & name, int grade);
		Bureaucrat(const Bureaucrat & copy);
		virtual ~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & obj);

		std::string getName(void) const;
		int			getGrade(void) const;
		void		setGrade(int grade);

		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form & form) const;
		void		executeForm(const Form & form) const;


		class GradeTooLowException: public std::exception
		{
			private:
				virtual const char * what() const throw();
		};

		class GradeTooHighException: public std::exception
		{
			private:
				virtual const char * what(void) const throw();
		};
};

// external function
	std::ostream & operator<<(std::ostream & outstr, const Bureaucrat & bureaucrat);

#endif
