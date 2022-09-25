
#include "Bureaucrat.hpp"
#include "Form.hpp"


// Default constructor
Bureaucrat::Bureaucrat(): _name("NoName")
{
	throw Bureaucrat::GradeTooLowException();
	std::cout << "\033[33mDef constr Bureaucrat: \033[0m" << getName() << " Grade: " << getGrade() << " created" << std::endl;
}

// Partially Parameterized constructor
Bureaucrat::Bureaucrat(const std::string & name): _name(name)
{
	throw Bureaucrat::GradeTooLowException();
	std::cout << "\033[33mPartyPrmtrzd constr Bureaucrat: \033[0m" << getName() << " Grade: " << getGrade() << " created" << std::endl;
}

// Parameterized constructor
Bureaucrat::Bureaucrat(const std::string & name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;

	std::cout << "\n\033[33mPrmtrzd constr Bureaucrat: \033[0m" << getName() << " Grade: " << getGrade() << " created" << " Adr: " << &name << std::endl;
}

// // Copy constructor useing overload operator=
// Bureaucrat::Bureaucrat(const Bureaucrat & copy)
// {
// 	*this = copy;
// 	// _name = copy._name;
// 	// _grade = copy._grade;
// 	std::cout <<  "\033[33mCopy constr Bureaucrat: \033[0m" << this->getName() << " Grade: " << getGrade() << " copied" << std::endl;
// }

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat & copy) : _name(copy._name + "_copy"), _grade(copy._grade)
{
	std::cout << "\033[33mCopy constr Bureaucrat: \033[0m" << this->getName() << " Grade: " << getGrade() << " copied" << std::endl;
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[35mBureaucrat: \033[0m" << *this << "\033[35m destructed.\033[0m" << std::endl;
}

// Overload operator
Bureaucrat & Bureaucrat::operator=(const Bureaucrat & obj)
{
	if (this != &obj)
	{
		this->_grade = obj._grade;
		*(std::string *) &_name = obj._name;
		std::cout <<  "\033[33mOvrld operator= called. Bureaucrat: \033[0m" << this->getName() << " Grade: " << getGrade() << std::endl;
	}
	return (*this);
}

/*
*(std::string *) &_name = obj._name;

_name - поле текущего объекта
&_name - его адрес
(std::string *) &_name - каст адреса (поле не std::string что ли?) (edited)
*(std::string *) &_name - разыменование, чтобы получить ссылку
*(std::string *) &_name = obj._name - присваивание по этой ссылке
*/

// getters & setters
std::string Bureaucrat:: getName(void) const
{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

//increment & decrement & signer
void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

//! new function
void	Bureaucrat::signForm(Form & form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << "\033[32m signed \033[0m" << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException & exc)
	{
		std::cerr << _name << "\033[31m couldn't sign " << form.getName() << " because \033[0m" << exc.what() << std::endl;
	}
}

// my exceptions
// const char * what() const throw() - in this form it is defined in std::exception

	const char * Bureaucrat::GradeTooHighException::what(void) const throw()
	{
		return ("\033[31mGrade is too high! Can't be higher than 1.\033[0m");
	}

	const char * Bureaucrat::GradeTooLowException::what(void) const throw()
	{
		return "\033[31mGrade is too low! Can't be lower than 150.\033[0m";
	}

// external function
	std::ostream & operator<<(std::ostream & outstr, const Bureaucrat & bureaucrat)
	{
		outstr << "\t" << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
		return outstr;
	}
