#include <iostream>
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor" << std::endl;
	initDictionary();
}

Intern::Intern(const Intern & intern)
{
	(void)intern;
	std::cout << "Intern constructor" << std::endl;
	initDictionary();
}

Intern::~Intern()
{
	std::cout << "Intern destroy" << std::endl;
}

Intern & Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	return *this;
}

Form * Intern::makeForm(const std::string & name, const std::string & target)
{
	int i = 0;
	while (i < 3 && dictionary[i].first != name)
		i++;
	return (this->*dictionary[i].second)(target);
}

Form * Intern::makeShrubbery(const std::string & target)
{
	std::cout << "Intern creates Shrubbery" << std::endl;
	return new ShrubberyCreationForm(target);
}

Form * Intern::makeRobotomy(const std::string & target)
{
	std::cout << "Intern creates Robotomy" << std::endl;
	return new RobotomyRequestForm(target);
}

Form * Intern::makePresidential(const std::string & target)
{
	std::cout << "Intern creates Presidential" << std::endl;
	return new PresidentialPardonForm(target);
}

Form * Intern::formNotFound(const std::string & target)
{
	(void)target;
	std::cout << "Intern not found such form" << std::endl;
	return NULL;
}

void Intern::initDictionary()
{
	dictionary[0].first = "shrubbery creation";
	dictionary[0].second = &Intern::makeShrubbery;
	dictionary[1].first = "robotomy request";
	dictionary[1].second = &Intern::makeRobotomy;
	dictionary[2].first = "presidential pardon";
	dictionary[2].second = &Intern::makePresidential;
	dictionary[3].second = &Intern::formNotFound;
}
