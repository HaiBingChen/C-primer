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

	for(int i=0; i<10; ++i){
		ivec.push_back(i);
	}

	//replace_copy(ivec.begin(), ivec.end(), back_inserter(ilst), 5, 50);
	//replace_copy(ivec.begin(), ivec.end(), front_inserter(ilst), 5, 50);
	replace_copy(ivec.begin(), ivec.end(), inserter(ilst, ilst.end()), 5, 50);

	for(list<int>::iterator it=ilst.begin(); it!=ilst.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;

	return 0;
}
