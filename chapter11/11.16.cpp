#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <fstream>

using namespace std;

int main(void)
{
	ostream_iterator<string> out_iter(cout, " ");
	string file_name, word;
	
	cout << "please input the file name:" << endl;

	cin >> file_name;

	ifstream input(file_name.c_str());

	istream_iterator<string> in_iter(input), eof;

	copy(in_iter, eof, out_iter);

	input.clear();

	input.close();

	return 0;
}
