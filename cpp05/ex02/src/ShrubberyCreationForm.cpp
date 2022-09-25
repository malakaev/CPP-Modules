// #include <iostream>
// #include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137), _target("NonameTarget")
{
	std::cout << "\033[33mShrubbery default constructor: \033[0m" << getName() << std::endl;
}

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & formCopy) :
// 						Form("Shrubbery", 145, 137), target("none")
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & formCopy) :
						Form(formCopy), _target(formCopy._target + "_copy")
{
	// *this = formCopy;
	std::cout << "\033[33mShrubbery copy constructor: \033[0m" << getName() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) :
						Form("Shrubbery", 145, 137), _target(target)
{
	std::cout << "\033[33mShrubbery prm constructor: \033[0m" << getName() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\033[35mShrubbery destroy: \033[0m" << getName() << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
	Form::operator=(rhs);
	_target = rhs._target;
	std::cout <<  "\033[33mShrubbery Ovrld operator= called. \033[0m";
	return *this;
}

std::ostream & operator<<(std::ostream & outstr, const ShrubberyCreationForm & form)
{
	outstr << "Shr_Form_name: " << form.getName() << ", form_status: " << std::boolalpha << form.isSign() << "; sign_grade: "
	<< form.getSignGrade() << "; exec_grade: " << form.getExecGrade() << ", target: " << form.getTarget();
	return outstr;
}

// getter
const std::string & ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	Form::execute(executor);
	std::ofstream file((_target + "_shrubbery").c_str());
	if (file.is_open())
	{
		file << "      /\\      \n"
				"     /\\/\\     \n"
				"    /\\/\\/\\    \n"
				"   /\\/\\/\\/\\   \n"
				"  /\\/\\/\\/\\/\\  \n"
				" /\\/\\/\\/\\/\\/\\ \n"
				"/\\/\\/\\/\\/\\/\\/\\\n"
				"      ||      \n"
				"      ||      \n"
				"      ||      \n" << std::endl;

		file << "          .     .  .      +     .      .          .\n"
				"     .       .      .     #       .           .\n"
				"        .      .         ###            .      .      .\n"
				"      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
				"          .      . \"####\"###\"####\"  .\n"
				"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
				"  .             \"#########\"#########\"        .        .\n"
				"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
				"     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
				"                .\"##\"#####\"#####\"##\"           .      .\n"
				"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
				"      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
				"    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
				"            .     \"      000      \"    .     .\n"
				"       .         .   .   000     .        .       .\n"
				"........................00000..................................\n" << std::endl;

		file.close();
	}

}
