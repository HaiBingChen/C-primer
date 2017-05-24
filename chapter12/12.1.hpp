#ifndef __11_1_hpp
#define __11_1_hpp

#include <iostream>
#include <string>

class Person{
public:
	Person(const string &nm, const string &addr):name(nm), address(addr)
	{  }

	std::string get_name() const
	{return name;}

	std::string get_address() const
	{return address;}

private:
	std::string name;
	std::string address;
};

#endif
