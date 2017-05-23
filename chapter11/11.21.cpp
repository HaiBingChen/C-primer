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
	for(int i=0; i<20; ++i){
		ilst.push_back(i);
	}
	ilst.push_back(0);
	ilst.push_back(10);
	ilst.push_back(5);

	list<int>::reverse_iterator it = find(ilst.rbegin(), ilst.rend(), 0);
	
	if(it != ilst.rend()){
		cout << "find val " << *it << endl;
	}else{
		cout << "can't find val" << endl;
	}

	return 0;
}
