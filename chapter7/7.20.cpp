#include <iostream>

using namespace std;

int factorial(int val)
{
	int res=1;

	while(val > 0){
		res *= val--;
	}

	return res;
}

int main(int argc, char *argv[])
{
	int num;

	cout << "please input a int num:";

	cin >> num;

	cout << "num " << num << " factorial is " << factorial(num) << endl;

	return 0;
}
