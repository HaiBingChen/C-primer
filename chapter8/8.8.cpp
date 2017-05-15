#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void process(const string & s)
{
	cout << s << " ";
}

int main(void)
{
	vector<string> files;
	string tmp_file, s;
	ifstream input;

	cout << "please input files name:" << endl;

	while(cin >> tmp_file){
		files.push_back(tmp_file);
	}

	vector<string>::const_iterator it=files.begin();

	while(it != files.end()){
		input.open(it->c_str());

		if(!input){
			cerr << "can't open file, continue" << endl;
		}else{
			while(input >> s){
				process(s);
			}
		}

		input.close();
		input.clear();
		++it;
	}
}
