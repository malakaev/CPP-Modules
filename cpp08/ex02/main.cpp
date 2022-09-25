#include <iostream>
#include <list>
#include "MutantStack.hpp"

void test_subject()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void test2()
{
	std::list<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl;

	mstack.pop_back();

	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);

	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(mstack);
}

void test3()
{
	MutantStack<int> mstack1;
	mstack1.push(732);
	MutantStack<int> mstack2(mstack1);
	MutantStack<int> mstack3;
	mstack3 = mstack2;

	MutantStack<int>::iterator it = mstack3.begin();
	MutantStack<int>::iterator ite = mstack3.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

int main()
{
	std::cout << "\t TEST 1. From subject" << std::endl;
	test_subject();

	std::cout << "\t TEST 2. Analog of subject-test with list" << std::endl;
	test2();

	std::cout << "\t TEST 3. Copy test." << std::endl;
	test3();

	return 0;
}
