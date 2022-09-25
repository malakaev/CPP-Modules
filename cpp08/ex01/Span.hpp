#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class	Span
{
	public:
		typedef std::vector<int>::iterator	Iterator;
		typedef std::vector<int>			Array;

		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span &	operator = (Span const & rhs);
		Array	getArray(void);
		uint	getSize(void);
		void	addNumber(int number);
		void	addRange(Iterator begin, Iterator end);
		void	addRange(int begin, int end);
		void	addRange(Span & src);
		uint	shortestSpan(void);
		uint	longestSpan(void);

	private:
		unsigned int	_size;
		Array			_array;

		Span(void);
		
};

std::ostream &	operator << (std::ostream & out, Span & sp);

#endif
