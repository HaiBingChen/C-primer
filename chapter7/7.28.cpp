#include <iostream>

using namespace std;

size_t cal_sum(void)
{
	static size_t ctr=0;

	return ctr++;
}

int main(int argc, char *argv[])
{
	
	for(size_t i=0; i<10; ++i){
		size_t val;

		val = cal_sum();

		cout << val << " " ;
	}

	cout << endl;

	return 0;
}
