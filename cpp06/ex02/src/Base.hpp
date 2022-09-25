
#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base
{
	public:
		A()
		{
			std::cout << "A created" << std::endl;
		}
		~A()
		{
			std::cout << "A destroyed" << std::endl;
		}
};
class B : public Base
{
	public:
		B()
		{
			std::cout << "B created" << std::endl;
		}
		~B()
		{
			std::cout << "B destroyed" << std::endl;
		}
};
class C : public Base
{
	public:
		C()
		{
			std::cout << "C created" << std::endl;
		}
		~C()
		{
			std::cout << "C destroyed" << std::endl;
		}
};

Base * generate(void);
void identify(Base * p);
void identify(Base & p);

#endif
