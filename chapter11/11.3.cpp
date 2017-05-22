#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
	vector<int> ivec;
	int ival;

	cout << "please input some int :" << endl;
	
	while(cin >> ival){
		ivec.push_back(ival);
	}

	cin.clear();

	int sum = accumulate(ivec.begin(), ivec.end(), 0);

	cout << "the accumulate is " << sum << endl;

	return 0;
}
