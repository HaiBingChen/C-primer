#include <iostream>
#include <stdexcept>
#include <_8_3.hpp>

/*
int main(void)
{
	get(cin);

	return 0;
}
*/

istream &get(istream &in)
{
	string val;

	while(in >> val, !in.eof()){
		if(in.bad()){
			in.clear();
			throw runtime_error("IO stream corrupted");
		}

		if(in.fail()){
			cerr << "bad date, try again" << endl;
			//in.clear(istream::failbit);
			//in.ignore(200, ' ');
			//in.clear();
			continue;
		}

		cout << val << " ";
	}

	in.clear();

	return in;
}
