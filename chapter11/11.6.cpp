#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	fill_n(a, 10, 0);

	for(size_t i=0; i<10; ++i){
		cout << a[i] << " ";
	}


	cout << endl;

	return 0;
}
