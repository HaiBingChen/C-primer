#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(void)
{
	vector<int> v;
	int val;

	while(cin >> val){
		v.push_back(val);
	}

	int *a = new int[v.size()];

	int *p = a;

	for(vector<int>::iterator i=v.begin(); i!=v.end(); ++i, ++p){
		*p = *i;
		cout << *p <<" ";
	}
	
	cout << endl;

	delete [] a;
	p=NULL;
}
