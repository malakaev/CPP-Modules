
#include "Bureaucrat.hpp"

void test_stack(std::string testName, int testGrade)
{
	try
	{
		Bureaucrat test(testName, testGrade);
		std::cout << "Created object: " << test.getName() << ", with grade: " << test.getGrade() << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

void test_stack_noGrade(std::string testName)
{
	try
	{
		Bureaucrat test(testName);
		std::cout << "Created object: " << test.getName() << ", with grade: " << test.getGrade() << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

void test_stack_noParameters()
{
	try
	{
		Bureaucrat test;
		std::cout << "Created object: " << test.getName() << ", with grade: " << test.getGrade() << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

void test_heap(std::string testName, int testGrade)
{
	try
	{
		Bureaucrat * test = new Bureaucrat (testName, testGrade);
		std::cout << "Created object: " << test->getName() << ", with grade: " << test->getGrade() << std::endl;
		delete test;
	}
	catch (std::exception & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

void test_heap_noGrade(std::string testName)
{
	try
	{
		Bureaucrat * test = new Bureaucrat (testName);
		std::cout << "Created object: " << test->getName() << ", with grade: " << test->getGrade() << std::endl;
		delete test;
	}
	catch (std::exception & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

void test_heap_noParameters()
{
	try
	{
		Bureaucrat * test = new Bureaucrat;
		std::cout << "Created object: " << test->getName() << ", with grade: " << test->getGrade() << std::endl;
		delete test;
	}
	catch (std::exception & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

void test_copy(std::string testName, int testGrade)
{
	try
	{
		std::string testName_stack = testName + "_on_stack";
		std::string testName_heap = testName + "_on_heap";

		Bureaucrat test_stack(testName_stack, testGrade);
		Bureaucrat * test_heap = new Bureaucrat (testName_heap, testGrade);

		std::cout << test_stack << std::endl;
		std::cout << *test_heap << std::endl;

		Bureaucrat test_stack_copy = Bureaucrat(test_stack);
		Bureaucrat *test_heap_copy = new Bureaucrat(*test_heap);

		std::cout << test_stack_copy << std::endl;
		std::cout << *test_heap_copy << std::endl;

		delete test_heap;
		delete test_heap_copy;
	}
	catch (std::exception & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

void test_increment(std::string testName, int testGrade)
{
	try
	{
		Bureaucrat test(testName, testGrade);
		while (true)
		{
			test.incrementGrade();
			std::cout << test << std::endl;
		}
	}
	catch (std::exception & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

void test_decrement(std::string testName, int testGrade)
{
	try
	{
		Bureaucrat test(testName, testGrade);
		while (true)
		{
			test.decrementGrade();
			std::cout << test << std::endl;
		}
	}
	catch (std::exception & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

int main(void)
{
	std::cout << "\n \t TEST 1:    Constructors on stack" << std::endl;
	test_stack("Tom1", 0);
	test_stack("Tom2", 151);
	test_stack("Tom3", 1);
	test_stack("Tom4", 100);
	std::cout << "    --- Without all parameters ---" << std::endl;
	test_stack_noGrade("Tom5");
	test_stack_noParameters();

	std::cout << "\n\n \t TEST 2:    Constructors on heap" << std::endl;
	test_heap("Jerry1", 0);
	test_heap("Jerry2", 1);
	std::cout << "    --- Without all parameters ---" << std::endl;
	test_heap_noGrade("Jerry3");
	test_heap_noParameters();

	std::cout << "\n\n \t TEST 3:    COPY constructor" << std::endl;
	test_copy("Leo", 1);

	std::cout << "\n\n \t TEST 5:    Increment" << std::endl;
	test_increment("Chip", 5);

	std::cout << "\n\n \t TEST 6:    Decrement" << std::endl;
	test_decrement("Dale", 145);

	return (0);
}
