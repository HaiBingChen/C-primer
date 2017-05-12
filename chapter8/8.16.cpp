#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	string line, file_name, word;
	ifstream input;
	vector<string> file_save;
	cin >> file_name;

	input.open(file_name.c_str());

	if(!input){
		cerr << "can't open file " << file_name << endl;
		input.clear();
		return -1;
	}else{
		while(getline(input, line)){
			file_save.push_back(line);
		}

		input.clear();

		for(vector<string>::iterator i=file_save.begin(); i!=file_save.end(); ++i){
			istringstream stream((*i));

			while(stream >> word){
				cout << word << " ";
			}
		}
	}

	return 0;
}
