#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"
#include <iostream>
#include <fstream>


class ShrubberyCreationForm : public Form
{

	private:
		std::string _target;

	public:
		ShrubberyCreationForm();

		ShrubberyCreationForm(const ShrubberyCreationForm & formCopy);

		ShrubberyCreationForm(const std::string & target);

		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

		virtual void execute(const Bureaucrat & executor) const;

		const std::string & getTarget() const;


};

std::ostream & operator<<(std::ostream & outstr, const ShrubberyCreationForm & form);


#endif
