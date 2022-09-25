#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	Form *	scf;
	Form *	rrf;
	Form *	ppf;
	Form *	noValidForm;

	std::cout << "\n--- Start creating ---" << std::endl;
	scf = someRandomIntern.makeForm("shrubbery creation", "MyFile");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Bob");
	noValidForm = someRandomIntern.makeForm("valid form", "validation");

	std::cout << "\n--- Printing results ---" << std::endl;
	std::cout << scf << " = " << *scf << std::endl;
	std::cout << rrf << " = " << *rrf << std::endl;
	std::cout << ppf << " = "<< *ppf << std::endl;
	std::cout << noValidForm << std::endl;

	std::cout << "\n--- Deleting ---" << std::endl;
	delete scf;
	delete rrf;
	delete ppf;
	delete noValidForm;

	return 0;
}
