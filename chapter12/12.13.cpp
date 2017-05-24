#include "Screen.hpp"
#include <iostream>

using namespace std;

int main(void)
{
	string str("aaaaa\naaaaa\naaaaa\naaaaa\naaaaa\n");
	string &P_str = str;

	Screen myscreen(5, 6, P_str);
	myscreen.move(4, 0).set('#').display(cout);

	return 0;
}
