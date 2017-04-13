#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(void){
	vector<string> buf;
	string val;

	cout << "please input a text: ";
	
	while(cin >> val){
		buf.push_back(val);	
	}	

	for(vector<int>::size_type i=0; i!=buf.size(); i++){
		for(string::size_type j=0; j!=buf[i].size(); j++){
			if(islower(buf[i][j])){
				buf[i][j]=toupper(buf[i][j]);
			}
		}

		cout << buf[i] << " ";

		if((i+1) % 8 == 0){
			cout << endl;
		}
	}

	cout << endl;

	return 0;
}
