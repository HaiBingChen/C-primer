#include <iostream>
#include <bitset>
#include <stdexcept>

using namespace std;

int main(void)
{
	bitset<100> bs;

	bs.set();

	try{
		bs.to_ulong();
	}catch(overflow_error err){
		cout << err.what() << endl;
	}

	return 0;
}
