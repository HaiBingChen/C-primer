#ifndef _13_14_HPP
#define _13_14_HPP

#include <iostream>

struct Exmp1{

	Exmp1()
	{std::cout << "Exmp1()" << std::endl;}
	
	Exmp1(const Exmp1 &)
	{std::cout << "Exmp1(const Exmp1 &)" << std::endl;}

	Exmp1 &operator =(const Exmp1 &other)
	{std::cout << "Exmp1 &operator =(const Exmp1 &other)" << std::endl;}

	~Exmp1()
	{std::cout << "~Exmp1()" << std::endl;}
};

#endif
