#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main(void)
{
	list<string> slst;
	string sval;

	cout << "please input some string :" << endl;
	
	while(cin >> sval){
		slst.push_back(sval);
	}

	cin.clear();

	string count_string;
	int occur_nums;

	cout << "please input the string you want to count" << endl;

	cin >> count_string;

	occur_nums = count(slst.begin(), slst.end(), count_string);

	cout << "the string " << count_string << " occur " << occur_nums
		 << " time" << (occur_nums > 1? "s" : " ") << endl;
	
	return 0;
}
