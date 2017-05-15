#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ifstream input;
	string file_name, file_read;
	vector<string> file_save;

	cout << "please input file name:" <<endl;

	cin >> file_name;

	input.open(file_name.c_str());

	if(!input){
		cerr << "con't opne file" << endl;
		input.clear();
		return 1;
	}else{
		while(getline(input, file_read)){
			cout << file_read << endl;
			file_save.push_back(file_read);
		}

		input.close();

		if(input.eof()){
			cout << "file read end" << endl;
			return 4;
		}

		if(input.bad()){
			cout << "system err" << endl;
			return 2;
		}

		if(input.fail()){
			cout << "file read file" << endl;
			return 3;
		}
	}

	return 0;
}
