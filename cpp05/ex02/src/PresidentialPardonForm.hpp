#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();

		PresidentialPardonForm(const PresidentialPardonForm & formCopy);

		explicit PresidentialPardonForm(const std::string & target);

		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm & rhs);

		virtual void execute(const Bureaucrat & executor) const;

		const std::string & getTarget() const;

};

std::ostream & operator<<(std::ostream & outstr, const PresidentialPardonForm & form);

#endif
