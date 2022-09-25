#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();

		RobotomyRequestForm(const RobotomyRequestForm & formCopy);

		RobotomyRequestForm(const std::string & target);

		virtual ~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

		const std::string & getTarget() const;

		virtual void execute(const Bureaucrat & executor) const;

};

std::ostream & operator<<(std::ostream & outstr, const RobotomyRequestForm & form);


#endif
