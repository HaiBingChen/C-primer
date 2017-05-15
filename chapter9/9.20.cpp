#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	vector<int> ivec;
	list<int> ilst;
	int ival;

	cout << "please input int number to vector:" << endl;

	while(cin >> ival){
		ivec.push_back(ival);
	}

	cin.clear();

	cout << "please input int number to list:" << endl;

	while(cin >> ival){
		ilst.push_back(ival);
	}

	vector<int>::iterator vit=ivec.begin();
	list<int>::iterator lit=ilst.begin();

	while(vit != ivec.end() && lit != ilst.end()){
		if( *vit != *lit){
			break;
		}

		++vit;
		++lit;
	}

	if(vit == ivec.end() && lit == ilst.end()){
		cout << "The vector contains the same eiements as the list" << endl;
	}else{
		cout << "List and vector contain diffrernt elememnts" << endl;
	}

	return 0;
}
