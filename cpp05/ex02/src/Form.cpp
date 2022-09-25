// #include <iostream>
#include "Form.hpp"

// Default constructor
Form::Form(): _name("NoNameForm"), _signGrade(1), _execGrade(1)
{
	std::cout << "\033[33mDef constr Form: \033[0m" << _name << " Sign_Grade: " << _signGrade << " Exec_Grade: " << _execGrade << std::endl;
}

// Copy constructor
Form::Form(const Form & copy) : _name(copy._name + "_copy"), _sign(copy._sign), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	std::cout << "\033[33mForm copy constructor: \033[0m" << _name << " Sign_Grade: " << _signGrade << " Exec_Grade: " << _execGrade << std::endl;
}

// Parameterized constructor
Form::Form(const std::string &name, const int signGrade, const int execGrade)
			: _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "\n\033[33mForm prmtrzd constr: \033[0m";
	if (signGrade < 1 || execGrade < 1)
	{
		throw GradeTooHighException();
	}
	else if (signGrade > 150 || execGrade > 150)
	{
		throw GradeTooLowException();
	}
	this->_sign = false;
	std::cout << _name << std::endl;
}

// Destructor
Form::~Form()
{
	// std::cout << "Form destroy: " << _name << std::endl;
	std::cout << "\033[35mForm: \033[0m" << *this << "\033[35m destructed.\033[0m" << std::endl;
}

// Overload operator
Form & Form::operator=(const Form & rhs)
{
	if (this != &rhs)
	{
		*(std::string *) &_name = rhs._name;
		_sign = rhs._sign;
		*(int *) &_signGrade = rhs._signGrade;
		*(int *) &_execGrade = rhs._execGrade;
		std::cout <<  "\033[33mForm Ovrld operator= called. \033[0m";
		std::cout << _name << std::endl;
	}
	return *this;
}

// getters & setters
const std::string & Form::getName() const
{
	return _name;
}

bool Form::isSign() const
{
	return _sign;
}

int Form::getSignGrade() const
{
	return _signGrade;
}

int Form::getExecGrade() const
{
	return _execGrade;
}

void Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (_sign == true)
	{
		std::cout << "Form already signed" << std::endl;
	}
	else if (bureaucrat.getGrade() <= _signGrade)
	{
		_sign = true;
	}
	else
	{
		throw GradeTooLowException();
	}
}

// !new
void Form::execute(const Bureaucrat & executor) const
{
	if (_sign != true)
	{
		throw FormNotSignedException();
	}
	else if (executor.getGrade() > _execGrade)
	{
		throw GradeTooLowException();
	}
}

std::ostream & operator<<(std::ostream & outstr, const Form & form)
{
	outstr << "Form_name: " << form.getName() << ", form_status: " << std::boolalpha << form.isSign() << "; sign_grade: "
	<< form.getSignGrade() << "; exec_grade: " << form.getExecGrade();
	return outstr;
}

// exceptions
const char * Form::GradeTooLowException::what() const throw()
{
	return "\033[31mForm error: Grade is too low!\033[0m";
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("\033[31mForm error: Grade is too high!\033[0m");
}

// !new
const char * Form::FormNotSignedException::what() const throw()
{
	return ("\033[31mForms error: not signed\033[0m");
}
