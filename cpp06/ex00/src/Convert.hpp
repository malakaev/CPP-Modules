// #pragma once
#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <iomanip>

class Convert
{
	private:

		std::string _type;

	public:

		Convert();
		Convert(const Convert & copy);
		~Convert();

		Convert & operator=(const Convert & rhs);

		void typeCheck(const std::string & input);
		void convertation(const std::string & input) const;
		std::string & getType();
};

#endif
