#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main(void)
{
	vector<int> ivec;
	list<int> ilst;

	for(int i=0; i<20; ++i){
		ilst.push_back(i);

		if(i%2){
			ilst.push_back(i);
		}
	}

	unique_copy(ilst.begin(), ilst.end(), back_inserter(ivec));

	for(list<int>::iterator it=ilst.begin(); it!=ilst.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;
	
	for(vector<int>::iterator it=ivec.begin(); it!=ivec.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;

	return 0;
}
