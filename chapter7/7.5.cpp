#include <iostream>

using namespace std;

int fun(const int a, int *pb);

int main(void)
{
	const int a = 10;
	int b = 20;

	cout << &b << endl;

	cout << "the samller number is: " << fun(a, &b) << endl;

	cout << &b << endl;

	return 0;
}

int fun(const int a, int *pb)
{
	int c=20;

	//改变pb指针指向的值并不会改变传入的指针&b的值
	//这里的pb只是b的地址的一个副本,改表这个值不会改变原来的指针地址
	pb=&c;

	return a<*pb? a : *pb;
}
