#include "Array.hpp"

int main()
{
	Array<int> int_arr(30);
	int * mirror = new int[30];

	Array<std::string> str_arr(3);
	str_arr[0] = "Welcome";
	str_arr[1] = "my";
	str_arr[2] = "friend!";

	for (int i = 0; i < 3; i++)
		std::cout << str_arr[i] << " ";
	std::cerr << "\n" << std::endl;


	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		int value = rand();
		int_arr[i] = value;
		mirror[i] = value;
	}

	{
		Array<int> tmp = int_arr;
		Array<int> test(tmp);
	}

	try
	{
		int_arr[-2] = 0;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		int_arr[150] = 0;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cerr << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << mirror[i] << " mirror\n" << int_arr[i] << " number\n" << std::endl;
		if (mirror[i] != int_arr[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	delete[] mirror;
	return 0;
}
