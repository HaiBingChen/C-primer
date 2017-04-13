#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(void){
	vector<string> buf;
	string val;

	cout << "please input a text: ";
	
	while(cin >> val){
		buf.push_back(val);	
	}	

	vector<string>::size_type cnt=0;
	for(vector<string>::iterator i=buf.begin(); i!=buf.end(); ++i){
		for(string::size_type j=0; j!=(*i).size(); ++j){
			if(islower((*i)[j])){
				(*i)[j]=toupper((*i)[j]);
			}
		}

		cout << *i << " ";
		
		cnt++;	
		if( cnt % 8 == 0){
			cout << endl;
		}
	}

	cout << endl;

	return 0;
}
