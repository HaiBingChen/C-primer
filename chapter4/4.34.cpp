#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(void)
{
	vector<string> v;
	string val;

	cout << "please input strings: ";

	while(cin >> val){
		v.push_back(val);
	}

	
	string *a = new string[v.size()];

	string *p = a;

	for(vector<string>::iterator i=v.begin(); i!=v.end(); ++i, ++p){
		*p = *i;
	}

	for(p=a;  p!=a+v.size(); ++p){
		cout << *p << endl;
	}

	delete [] a;
	p=NULL;	

	return 0;
}
