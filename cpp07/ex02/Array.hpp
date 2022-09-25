#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:

		unsigned int _size;
		T	* _data;

	public:

		Array() : _size(0), _data(NULL)
		{
			std::cout << "Zero constructor" << std::endl;
		}

		Array(const unsigned int & n)
		{
			std::cout << "N constructor" << std::endl;
			if (!n)
				_data = NULL;
			else
				_data = new T[n];
			_size = n;
		}

		Array(const Array & rhs)
		{
			std::cout << "Copy constructor called" << std::endl;
			_size = 0;
			_data = NULL;
			*this = rhs;
		}

		virtual ~Array()
		{
			if (_data)
				delete[] _data;
			_data = NULL;
			_size = 0;
			std::cout << "Destructor called" << std::endl;
		}

		Array & operator=(const Array & rhs); //implemented in Array.tpp
		// {
		// 	if (this == &rhs)
		// 		return (*this);
		// 	delete[] _data;
		// 	_size = rhs._size;
		// 	_data = new T[_size];
		// 	for (unsigned int i = 0; i < _size; i++)
		// 		_data[i] = rhs._data[i];
		// 	return (*this);
		// }

		T & operator[](const unsigned int index) const
		{
			if (index < 0 || index >= _size)
				throw std::range_error("Index out of range");
			return (_data[index]);
		}

		const unsigned int & size() const
		{
			return (_size);
		}
};

#include "Array.tpp"

#endif
