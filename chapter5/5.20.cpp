#include <iostream>

using namespace std;

int main(void)
{	
	int val1=0, val2=0;

	cout << "please input two number:";

	cin >> val1 >> val2;

	cout << "the smaller number is :" << (val1 < val2 ? val1 : val2) << endl;
	return 0;
}
