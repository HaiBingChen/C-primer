#include <iostream>
#include <fstream>
#include <stdexcept>

using namespace std;

istream &get(istream &in);

int main(void)
{
	ifstream input;
	string filename;

	cout << "please input a file name:";
	cin >> filename;

	input.open(filename.c_str());

	get(input);

	input.close();
	input.clear();

	return 0;
}

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
			in.clear();
			continue;
		}

		cout << val << " ";
	}

	in.clear();

	return in;
}
