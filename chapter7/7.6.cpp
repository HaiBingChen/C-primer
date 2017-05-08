#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	//1、一个数异或本身恒等于0，如5^5恒等于0；
	//2、一个数异或0恒等于本身，如5^0恒等于5。
	*a = *a^*b;
	//*b = *b ^ *b ^ *a = 0 ^ *a = *a';
	*b = *b^*a;
	//此时*b已经变为*a
	//*a = *a ^ *a ^ *b = 0 ^ *b = *b;
	*a = *b^*a;
}

int main(void)
{
	int a=10, b=20;
	
	swap(&a, &b);

	cout << "the swap res is a="<< a << " b= " << b << endl;

	return 0;
}
