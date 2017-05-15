#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(void)
{
	string sval;
	list<string> slst;

	cout << "please input the string: " << endl;

	while(cin >> sval){
		slst.push_back(sval);
	}

	for(list<string>::const_iterator si=slst.begin(); si!=slst.end(); ++si){
		cout << *si << " ";
	}

	cout << endl;

	return 0;
}
