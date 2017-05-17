#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;

	cout << "please input the string: ";
	cin >> s;

	for(string::iterator it=s.begin(); it!=s.end(); ++it){
		if(isupper(*it)){
			s.erase(it);
			--it;
		}
	}

	for(string::iterator it=s.begin(); it!=s.end(); ++it){
		cout << *it;
	}

	cout << endl;

	return 0;
}
