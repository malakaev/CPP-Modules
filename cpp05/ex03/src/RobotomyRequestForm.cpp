// #include <iostream>
#include <cstdlib> //for srand & rand
// #include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45), _target("NonameTarget")
{
	std::cout << "Robotomy constructor: " << getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & formCopy) :
					Form("Robotomy", 72, 45), _target(formCopy._target + "_copy")
{
	// *this = formCopy;
	// std::cout << "Robotomy constructor: " << getName() << std::endl;
	std::cout << "\033[33mRobotomy copy constructor: \033[0m" << getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) :
					Form("Robotomy", 72, 45), _target(target)
{
	// std::cout << "Robotomy constructor: " << getName() << std::endl;
	std::cout << "\033[33mRobotomy prm constructor: \033[0m" << getName() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "Robotomy destroy: " << getName() << std::endl;
	std::cout << "\033[35mRobotomy destroy: \033[0m" << getName() << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	Form::operator=(rhs);
	_target = rhs._target;
	std::cout <<  "\033[33Robotomy Ovrld operator= called.\033[0m";
	return *this;
}

std::ostream & operator<<(std::ostream & outstr, const RobotomyRequestForm & form)
{
	outstr << "Robo_Form_name: " << form.getName() << ", form_status: " << std::boolalpha << form.isSign() << "; sign_grade: "
	<< form.getSignGrade() << "; exec_grade: " << form.getExecGrade() << ", target: " << form.getTarget();
	return outstr;
}

// getter
const std::string & RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	Form::execute(executor);
	std::cout << "\033[32m    *** makes some drilling noises ***\033[0m" << std::endl;
	// std::srand(time(nullptr)); //not working on ubuntu
	std::srand(time(NULL));
	int test = std::rand();
	if (test % 2 == 0)
	{
		std::cout << "\033[32m" << _target << " has been robotomized successfully 50% of time\033[0m" << std::endl;
	}
	else
	{
		std::cout << "\033[31m" << _target << " failed.\033[0m" << std::endl;
	}
}
