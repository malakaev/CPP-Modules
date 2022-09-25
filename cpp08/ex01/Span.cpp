#include "Span.hpp"

Span::Span(void) { }

Span::Span(unsigned int N) : _size(0)
{
	_array.reserve(N);
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span::Array Span::getArray(void)
{
	return _array;
}

uint Span::getSize(void)
{
	return _size;
}

Span & Span::operator = (Span const & rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	this->_size = rhs._size;
	this->_array = rhs._array;

	return *this;
}

std::ostream &	operator << (std::ostream & out, Span & sp)
{
	std::vector<int> spArray = sp.getArray();

	for (Span::Iterator iter = spArray.begin(); iter < spArray.end(); iter++)
	{
		out << *iter << std::endl;
	}
	return out;
}

void Span::addNumber(int number)
{
	_size++;
	if (_size > _array.capacity())
	{
		_size--;
		throw std::out_of_range("Error: array is full");
	}
	_array.push_back(number);
	return ;
}

void Span::addRange(Iterator begin, Iterator end)
{
	for (Iterator iter = begin; iter < end; iter++)
	{
		addNumber(*iter);
	}
	return ;
}

void Span::addRange(int begin, int end)
{
	while (begin != end)
	{
		if (begin < end)
		{
			addNumber(begin++);
		}
		else
		{
			addNumber(begin--);
		}
	}
	addNumber(end);
	return ;
}

void Span::addRange(Span & src)
{
	addRange(src._array.begin(), src._array.end());
	return ;
}

uint Span::shortestSpan(void)
{
	uint shortest = UINT_MAX;
	uint span;
	Iterator iter;
	Array sorted(_array);

	if (sorted.size() < 2)
	{
		throw std::out_of_range("Error: requires two numbers in array at least");
	}
	std::sort(sorted.begin(), sorted.end());
	for (iter = sorted.begin(); iter < sorted.end() - 1; iter++)
	{
		span = static_cast<uint>(*(iter + 1) - *iter);
		if (shortest > span)
		{
			shortest = span;
		}
	}

	return shortest;
}

uint Span::longestSpan(void)
{
	uint longest;

	if (_array.size() < 2)
	{
		throw std::out_of_range("Error: requires two numbers in array at least");
	}
	longest =	*std::max_element(_array.begin(), _array.end()) -
				*std::min_element(_array.begin(), _array.end());
	return longest;
}

Span::~Span(void) { }
