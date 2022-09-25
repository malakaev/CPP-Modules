#include "Array.hpp"

template<class T>
Array<T> & Array<T>::operator=(const Array<T> & rhs)
{
	if (this == &rhs)
		return (*this);
		
	delete[] _data;
	_size = rhs._size;
	_data = new T[_size];

	for (unsigned int i = 0; i < _size; i++)
		_data[i] = rhs._data[i];

	return (*this);
}
