#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
	vector<string> svec;
	string file_name;
	string word;
	ifstream input;
	map<string, int> word_cout;

	cout << "please input the ignore file: " << endl;
	cin >> file_name;
	
	input.open(file_name.c_str());

	while(input >> word){
		svec.push_back(word);
	}

	input.clear();
	input.close();
	
	cout << "please input the save word: " << endl;

	vector<string>::iterator res;

	while(cin >> word){
		res = find(svec.begin(), svec.end(), word);

		if(res == svec.end()){
			++word_cout[word];
		}else{
			cout << "the word " << word << " is ignore" << endl;
		}
	}

	for(map<string, int>::iterator it=word_cout.begin(); it!=word_cout.end(); ++it){
		cout << it->first << " " << it->second << endl;
	}

	return 0;
}
