#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main(void)
{
	list<int> ilst;
	vector<int> ivec;

	for(int i=0; i<10; ++i){
		ivec.push_back(i);
	}

	copy(ivec.rbegin()+3, ivec.rbegin()+7, back_inserter(ilst));

	for(list<int>::iterator it=ilst.begin(); it!=ilst.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;

	return 0;
}
