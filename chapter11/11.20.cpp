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
	for(int i=0; i<20; ++i){
		ivec.push_back(i);
	}


	for(vector<int>::iterator it=ivec.end()-1; it!=ivec.begin()-1; --it){
		cout << *it << " ";
	}

	cout << endl;
	
	return 0;
}
