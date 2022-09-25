#include "Iter.hpp"

class Test
{
	public:
		Test(): _n(42) {}
		const int &get() const { return(_n); }
	private:
		int _n;
};

std::ostream &operator<<(std::ostream &out, const Test &rhs) {out << rhs.get(); return out; }


template<typename T>
void print(const T &x)
{
	std::cout << x << std::endl;
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	iter::iter(tab, 5, print);

	Test tab2[5];
	iter::iter(tab2, 5, print);

	std::cout << std::endl;
	std::string str[] = {"We", "are", "the", "champions", "!"};
	iter::iter(str, 5, print);
}
