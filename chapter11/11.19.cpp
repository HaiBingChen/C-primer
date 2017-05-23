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


	for(vector<int>::reverse_iterator it=ivec.rbegin(); it!=ivec.rend(); ++it){
		cout << *it << " ";
	}

	cout << endl;
	
	return 0;
}
