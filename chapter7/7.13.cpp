#include <iostream>

using namespace std;

int sum1(const int *p)
{
	int sum=0;


	while(*p != 0xff){
		sum += *p++;
	}

	return sum;
}

int sum2(const int *beg, const int *end)
{
	int sum=0;

	while(beg != end){
		sum += *beg++;
	}

	return sum;
}

int sum3(const int *p, size_t len)
{
	int sum=0;

	for(size_t i=0; i<len; ++i){
		sum += *p++;
	}

	return sum;
}

int main(void)
{
	int a[11] = {0 ,1, 2, 3, 4, 5, 6 ,7 ,8, 9, 0xff};

	cout << "sum1 is " << sum1(a) <<endl;
	cout << "sum2 is " << sum2(a, a+10) << endl;
	cout << "sum3 is " << sum3(a, 10) << endl;

	return 0;
}
