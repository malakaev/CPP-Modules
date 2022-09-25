
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
// # include <string>

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
		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & obj);

		std::string getName(void) const;
		int			getGrade(void) const;
		void 		setGrade(int grade);

		void 		incrementGrade(void);
		void 		decrementGrade(void);

// "explicit" prohibits implicit type conversion  -> «явный» запрещает неявное преобразование типов
// saved as example, сохранено для примера, в нашей функции нет в ней необходимости

		// class GradeTooLowException: public std::exception {
		// 	public:
		// 		explicit GradeTooLowException() {}

		// 		virtual const char * what() const throw()
		// 		{
		// 			return "Grade is too low!";
		// 		}
		// };

		class GradeTooLowException: public std::exception
		{
			private:
				virtual const char * what() const throw();
		};

		class GradeTooHighException: public std::exception
		{
			private:
				virtual const char* what(void) const throw();
		};
};

// external function
	std::ostream & operator<<(std::ostream & outstr, const Bureaucrat & bureaucrat);

#endif
