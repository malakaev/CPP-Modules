#include "Whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;

	// std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	// std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	// Test obj1(2), obj2(4);

	// std::cout << obj1 << " " << obj2 << std::endl;
	// ::swap(obj1, obj2);
	// std::cout << obj1 << " " << obj2 << std::endl;
	// std::cout << ::max(obj1, obj2) << std::endl;
	// std::cout << ::min(obj1, obj2) << std::endl;
	return (0);
}
