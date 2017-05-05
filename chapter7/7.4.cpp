#include <iostream>

using namespace std;

int abs(int a);

int main(void)
{
	cout << "the abs is :" << abs(-2.5) << endl; 
	return 0;
}

int abs(int a)
{
	return a<0? -a:a;
}
