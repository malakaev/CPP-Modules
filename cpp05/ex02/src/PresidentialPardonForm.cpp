// #include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5), _target("NonameTarget")
{
	// std::cout << "Presidential constructor: " << getName() << std::endl;
	std::cout << "\033[33mPresidential default constructor: \033[0m" << getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & formCopy) :
						Form("Presidential", 25, 5), _target(formCopy._target + "_copy")
{
	// *this = form;
	// std::cout << "Presidential constructor: " << getName() << std::endl;
	std::cout << "\033[33mPresidential copy constructor: \033[0m" << getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) :
						Form("Presidential", 25, 5), _target(target)
{
	// std::cout << "Presidential constructor: " << getName() << std::endl;
	std::cout << "\033[33mPresidential prm constructor: \033[0m" << getName() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "Presidential destroy: " << getName() << std::endl;
	std::cout << "\033[35mPresidential destroy: \033[0m" << getName() << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
	Form::operator=(rhs);
	_target = rhs._target;
	std::cout <<  "\033[33mPresidential Ovrld operator= called. \033[0m";
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	Form::execute(executor);
	std::cout << "\033[32m" << _target << " has been pardoned by Zaphod Beeblebrox\033[0m" << std::endl;
}

// getter
const std::string & PresidentialPardonForm::getTarget() const
{
	return _target;
}

std::ostream & operator<<(std::ostream & outstr, const PresidentialPardonForm & form)
{
	outstr << "Robo_Form_name: " << form.getName() << ", form_status: " << std::boolalpha << form.isSign() << "; sign_grade: "
	<< form.getSignGrade() << "; exec_grade: " << form.getExecGrade() << ", target: " << form.getTarget();
	return outstr;
}
