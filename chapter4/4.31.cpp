#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(void)
{
	string s;

	cin >> s;

	char *a = new char[s.size()];

	char *p = a;

	for(string::iterator i=s.begin(); i!=s.end(); ++i, ++p){
		*p = *i;
	}

	cout << a <<endl;

	delete [] a;
	p=NULL;
}
