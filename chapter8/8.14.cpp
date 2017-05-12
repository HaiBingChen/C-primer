#include <iostream>
#include <fstream>
#include <string>
#include "_8_3.hpp"

using namespace std;

ifstream& open_file(ifstream& in, const string file)
{
	in.close();
	in.clear();
	in.open(file.c_str());

	return in;
}

int main(void)
{
	string file_name;
	ifstream input;

	cout << "please input the file name:" << endl;

	cin >> file_name;
	
	open_file(input, file_name);

	if(!input){
		cerr << "can't not open file" << endl;
		input.clear();
		return -1;
	}else{
		get(input);
		
		input.close();
	}
	return 0;
}	
