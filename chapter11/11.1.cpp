#include <iostream>
#include <algorithm>
#include <vector>

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

	int count_num, occur_nums;

	cout << "please input the num you want to count" << endl;

	cin >> count_num;

	occur_nums = count(ivec.begin(), ivec.end(), count_num);

	cout << "the number " << count_num << " occur " << occur_nums
		 << " time" << (occur_nums > 1? "s" : " ") << endl;
	
	return 0;
}
