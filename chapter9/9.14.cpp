#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	string sval;
	vector<string> svec;

	cout << "please input the string: " << endl;

	while(cin >> sval){
		svec.push_back(sval);
	}

	for(vector<string>::const_iterator si=svec.begin(); si!=svec.end(); ++si){
		cout << *si << " ";
	}

	cout << endl;

	return 0;
}
