#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	int a=0, b=0;

	if(argc != 3){
		cout << "please input two num" << endl;
		return -1;
	}

	a=atoi(argv[1]);
	b=atoi(argv[2]);

	cout << "the sum of " << a << " and " << a << " is " << a+b << endl;

	return a+b;
}
