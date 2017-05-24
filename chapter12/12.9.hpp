#ifndef __12_9_hpp
#define __12_9_hpp

#include <iostream>
#include <string>

class Screen{
public:
	typedef std::string::size_type index;

	Screen(std::string &cts, index ht, index wd):contens(cts), height(ht), width(wd)
	{ }
	
	char get() const 
	{return contens[cursor];}

	char get(index ht, index wd) const;

private:

	std::string contens;

	index cursor;

	index height, width;
};

#endif
