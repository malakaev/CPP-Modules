#include "easyfind.hpp"

int main()
{
	int array[] = {8, 3, 5, 0, -1};

	{
		std::vector<int> v(array, array + sizeof(array) / sizeof(array[0]));
		std::vector<int>::iterator it;

		for (it = v.begin(); it != v.end(); ++it)
		{
			std::cout << *it << "    ";
		}
		std::cout << std::endl;

		for (int i = 0; i < 6; ++i)
		{
			try
			{
				it = easyfind(v, i);
				std::cout << *(it) << " found, position: " << it - v.begin() << std::endl;
			}
			catch (std::exception & e)
			{
				std::cout << i << " not found." << std::endl;
			}
		}
	}

	std::cout << std::endl;

	{
		std::list<int> lst(array, array + sizeof(array) / sizeof(array[0]));
		std::list<int>::iterator itr;

		for (itr = lst.begin(); itr != lst.end(); ++itr)
		{
			std::cout << *itr << "    ";
		}
		std::cout << std::endl;

		for (int i = 0; i < 6; i++)
		{
			try
			{
				itr = easyfind(lst, i);
				std::cout << *(itr) << " found." << std::endl;
			}
			catch (std::exception & e)
			{
				std::cout << i << " not found." << std::endl;
			}
		}
	}

	return 0;
}
