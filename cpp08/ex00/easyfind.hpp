#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>

template<typename T>
typename T::iterator easyfind(T & ctr, const int & val)
{
	typename T::iterator it = std::find(ctr.begin(), ctr.end(), val);
	if (it == ctr.end())
	{
		throw std::exception();
	}
	return it;
}

#endif
