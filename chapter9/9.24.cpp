#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> ivec;
	int val;

	val = ivec.at(0);
	cout << val << endl;

	val = ivec.front();
	cout << val << endl;

	val = *ivec.begin();
	cout << val << endl;

	return 0;
}
