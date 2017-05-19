#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
	set<string> sset;
	string file_name;
	string word;
	ifstream input;
	vector<string> svec;

	cout << "please input the exclude file: " << endl;
	cin >> file_name;
	
	input.open(file_name.c_str());

	while(input >> word){
		sset.insert(word);
	}

	input.clear();
	input.close();
	
	cout << "please input the some word: " << endl;

	while(cin >> word){
		svec.push_back(word);
	}

	for(vector<string>::iterator it=svec.begin(); it!=svec.end(); ++it){
		if(sset.find(*it) != sset.end()){
			cout << *it << " ";
		}else if((*it)[(*it).size()-1] != 's'){
			cout << *it << " ";
		}else{
			(*it).erase((*it).size()-1);
			cout << *it << " ";
		}
	}

	cout << endl;
	return 0;
}
