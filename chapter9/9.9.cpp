#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	list<int> lst;
	int val;

	cout << "please input the number: " << endl;

	while(cin >> val){
		lst.push_back(val);
	}

	for(list<int>::iterator i=lst.end(); i!=lst.begin(); ){
		cout << *(--i) << " ";
	}

	cout << endl;

	return 0;
}
