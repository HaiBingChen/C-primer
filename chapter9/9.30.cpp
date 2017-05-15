#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> ivec;

	cout << "vector size: " << ivec.size() << "vector capacity:" << ivec.capacity() << endl;

	for(size_t i=0; i!=10; ++i){
		ivec.push_back(i);
	
		cout << "vector size: " << ivec.size() << "vector capacity:" << ivec.capacity() << endl;
	}

	while(ivec.size() != ivec.capacity()){
		ivec.push_back(0);
	}

	ivec.push_back(0);

	cout << "vector size: " << ivec.size() << "vector capacity:" << ivec.capacity() << endl;

	ivec.reserve(100);

	cout << "vector size: " << ivec.size() << "vector capacity:" << ivec.capacity() << endl;

	while(ivec.size() != ivec.capacity()){
		ivec.push_back(0);
	}

	cout << "vector size: " << ivec.size() << "vector capacity:" << ivec.capacity() << endl;

	ivec.push_back(0);
	
	cout << "vector size: " << ivec.size() << "vector capacity:" << ivec.capacity() << endl;

	return 0;
}
