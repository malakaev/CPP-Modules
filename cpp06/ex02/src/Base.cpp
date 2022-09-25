#include "Base.hpp"

Base * generate()
{
	// srand(time(0));
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (0);
}

void identify(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "This is pointer to class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "This is pointer to class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "This is pointer to class C" << std::endl;
}

void identify(Base & p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "This is reference to class A" << std::endl;
	}
	catch(const std::bad_cast & e)
	{
		try
		{
			B & b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "This is reference to class B" << std::endl;
		}
		catch(const std::bad_cast & e)
		{
			try
			{
				C & c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "This is reference to class C" << std::endl;
			}
			catch(const std::bad_cast & e)
			{
				std::cout << "Unexpected class" << std::endl;
			}
		}
	}
	
}
