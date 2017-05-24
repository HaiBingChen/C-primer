#include "Screen.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

char Screen::get(Screen::index r, Screen::index c) const
{
	index row = r * width;
	return contents[row + c];
}

inline Screen::index Screen::get_cursor() const
{
	return cursor;
}

Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

Screen &Screen::set(Screen::index r, Screen::index c, char ch)
{
	contents[r*width+c] = ch;

	return *this;
}

Screen &Screen::move(Screen::index r, Screen::index c)
{
	if(r>=height || c>=width){
		cerr << "invalid row or colum" << endl;
		throw EXIT_FAILURE;
	}

	Screen::index row = r * width;
	cursor = row + c;

	return *this;
}
