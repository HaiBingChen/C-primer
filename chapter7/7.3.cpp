#include <iostream>

using namespace std;

int fun1(int a, int b);

int main(void)
{
	cout << "the total is :" << fun1(2, 3) << endl; 
	return 0;
}

int fun1(int a, int b)
{
	int total=1;

	for(size_t i=0; i<b; ++i){
		total *= a;
	}

	return total;
}
