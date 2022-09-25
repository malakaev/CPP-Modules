// #include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

void testCreateFormNoParam()
{
	std::cout << "\n\t-- Testing Def Form consructor" << std::endl;
	try
	{
		Form test;
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void testCreateFormWithParams(std::string nameForm, const int signGrade, const int execGrade)
{
	std::cout << "\n\t-- Testing with parameters > Name: " << nameForm << ", Sign_Grade: " << signGrade << ", Exec_Grade: " << execGrade << std::endl;
	try
	{
		Form objForm(nameForm, signGrade, execGrade);
		std::cout << objForm << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void testSignForm(std::string nameBure, const int bureGrade, std::string nameForm, const int signGrade, const int execGrade)
{
	std::cout << "\n\t-- Testing with parameters " << std::endl;
	std::cout << "\t\tBure_Name: " << nameBure << ", Bure_Grade: " << bureGrade << std::endl;
	std::cout << "\t\tForm_Name: " << nameForm << ", Sign_Grade: " << signGrade << ", Exec_Grade: " << execGrade << std::endl;
	try
	{
		Bureaucrat objBure(nameBure, bureGrade);
		Form objForm(nameForm, signGrade, execGrade);
		std::cout << objBure << std::endl;
		std::cout << objForm << std::endl;

		objBure.signForm(objForm);
		std::cout << objForm << std::endl;
	}
	catch (std::exception &e)
	{
		//здесь можно и cout вместо cerr, все равно работает как cerr так как cerr в методе Bureaucrat::signForm
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	// Testing Default Form Conctructor
	std::cout << "\n\n\tTEST 1:    Default Form Conctructor" << std::endl;
	testCreateFormNoParam();

	// Create Forms with errors
	std::cout << "\n\n\tTEST 2:    Create Forms with errors" << std::endl;
	testCreateFormWithParams("Forma_A", 0, 1);
	testCreateFormWithParams("Forma_B", 151, 1);

	// Sign testing
	std::cout << "\n\n\tTEST 3:    When Bureaucrat can't sign form" << std::endl;
	testSignForm("Bur_Klinton", 5, "Forma_C", 2, 2);
	
	std::cout << "\n\n\tTEST 4:    When Bureaucrat can sign form" << std::endl;
	testSignForm("Bur_Obama", 1, "Forma_C", 2, 2);

	return 0;
}
