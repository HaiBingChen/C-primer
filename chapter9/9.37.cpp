#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	string s;
	char ch;

	s.reserve(100);

	cout << "please input the string: ";
	while(cin >> ch){
		s.push_back(ch);
	}

	for(string::iterator it=s.begin(); it!=s.end(); ++it){
		cout << *it;
	}

	cout << endl;

	return 0;
}
