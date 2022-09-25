// #include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <unistd.h>

void test_copy()
{
	try
	{
		ShrubberyCreationForm Shr_test1;
		ShrubberyCreationForm Shr_test2(Shr_test1);

		std::cout << Shr_test1 << std::endl;
		std::cout << Shr_test2 << std::endl;
		std::cout << "target: " << Shr_test1.getTarget() << std::endl;
		std::cout << "target: " << Shr_test2.getTarget() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test_default()
{
	try
	{
		ShrubberyCreationForm test;
		std::cout << test << std::endl;
		std::cout << "target: " << test.getTarget() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


void test_sign_err()
{
	try
	{
		Bureaucrat bureaucrat("bureaucrat", 10);
		ShrubberyCreationForm shrubbery("test");

		std::cout << shrubbery << std::endl;
		bureaucrat.executeForm(shrubbery);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test_grade_err()
{
	try
	{
		Bureaucrat bureaucrat("bureaucrat", 145);
		ShrubberyCreationForm shrubbery("test");

		bureaucrat.signForm(shrubbery);
		std::cout << shrubbery << std::endl;
		bureaucrat.executeForm(shrubbery);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test_correct_execution_1()
{
	try
	{
		Bureaucrat bureaucrat("bureaucrat", 137);
		ShrubberyCreationForm shrubbery("test");

		bureaucrat.signForm(shrubbery);
		std::cout << shrubbery << std::endl;
		bureaucrat.executeForm(shrubbery);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test_correct_execution_2()
{
	try
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		ShrubberyCreationForm shrubbery("test1");
		RobotomyRequestForm robotomy("test2");
		PresidentialPardonForm presidential("test3");

		bureaucrat.signForm(shrubbery);
		bureaucrat.signForm(robotomy);
		bureaucrat.signForm(presidential);

		std::cout << shrubbery << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << presidential << std::endl;

		std::cout << "\n======" << std::endl;
		bureaucrat.executeForm(shrubbery);
		std::cout << "\n........." << std::endl;
		bureaucrat.executeForm(robotomy);
		std::cout << "\n.........\n" << std::endl;
		bureaucrat.executeForm(presidential);
		std::cout << "======\n" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test_correct_execution_3()
{
	try
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		RobotomyRequestForm robotomy("test");

		bureaucrat.signForm(robotomy);
		std::cout << robotomy << std::endl;

		std::cout << "\n........." << std::endl;
		for (int i = 0; i < 100; i++)
		{
			bureaucrat.executeForm(robotomy);
			usleep(100000);
		}
		std::cout << "\n.........\n" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main() {
	// Errors
	std::cout << "\n\t--- TEST 1. Sign error ---" << std::endl;
	test_sign_err();

	std::cout << "\n\t--- TEST 2. Grade error ---" << std::endl;
	test_grade_err();

	// Correct
	std::cout << "\n\t--- TEST 3. Default constructor ---" << std::endl;
	test_default();
	std::cout << "\n\t--- TEST 4. Copy constructor ---" << std::endl;
	test_copy();

	std::cout << "\n\t--- TEST 5. Correct execution 1 ---" << std::endl;
	test_correct_execution_1();
	std::cout << "\n\t--- TEST 6. Correct execution 1 ---" << std::endl;
	test_correct_execution_2();

	// std::cout << "\n\t--- TEST 7. Robotomizing ---" << std::endl;
	// test_correct_execution_3();

	return 0;
}
