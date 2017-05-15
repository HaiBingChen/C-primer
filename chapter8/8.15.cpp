#include <iostream>
#include <sstream>
#include "_8_3.hpp"

using namespace std;

int main(void)
{
	int val1 = 512, val2 = 1024;
	ostringstream format_message;

	format_message << "val1: " << val1 << "\n"
				   << "val2: " << val2 << "\n";

	istringstream input_string(format_message.str());
	string dump;

	get(input_string);

	return 0;
}
