#ifndef INTERN_HPP
#define INTERN_HPP


#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern 
{
	private:
		std::pair<std::string, Form *(Intern::*)(const std::string & target)> dictionary[4];

		Form * makeShrubbery(const std::string & target);

		Form * makeRobotomy(const std::string & target);

		Form * makePresidential(const std::string & target);

		Form * formNotFound(const std::string & target);

		void initDictionary();

	public:
		Intern();

		Intern(const Intern & intern);

		virtual ~Intern();

		Intern & operator=(const Intern & rhs);

		Form * makeForm(const std::string & name, const std::string & target);

};

#endif
