#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	vector<char> cvec;
	char ch;

	cout << "please input the vector(char): ";
	while(cin >> ch){
		cvec.push_back(ch);
	}

	string s(cvec.begin(), cvec.end());

	for(string::iterator it=s.begin(); it!=s.end(); ++it){
		cout << *it;
	}

	cout << endl;

	return 0;
}
