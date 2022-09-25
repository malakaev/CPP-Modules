#include "Span.hpp"

#define MAX_ELEM 100000

int main(void)
{
	// TEST from subject
	{
		std::cout	<< "\t TEST 1. From subject" << std::endl;

		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}

	// TEST 2
	{
		Span	s(4);

		std::cout	<< "\t TEST 2. Span size = 4" << std::endl;
		try
		{
			s.addNumber(8);
			s.addNumber(5);
			s.addNumber(0);
			s.addNumber(-2);
			s.addNumber(42);
			s.addNumber(42);
		}
		catch (std::exception & e)
		{
			std::cout	<< e.what() << std::endl;
		}

		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << s.longestSpan() << std::endl;
		std::cout << std::endl;
	}

	// TEST 3
	{
		Span				l(MAX_ELEM);
		std::vector<int>	random;

		std::cout	<< "\t TEST 3. Span size = " << MAX_ELEM << std::endl;
		std::srand(std::time(NULL));

		for (int i = 0; i < MAX_ELEM; i++)
		{
			random.push_back(std::rand());
		}
		l.addRange(random.begin(), random.end());
		std::cout << "Shortest span: " << l.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << l.longestSpan() << std::endl;
	}

	return 0;
}
