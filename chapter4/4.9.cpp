#include <iostream>
#include <cctype>

using namespace std;

int main(void){
	int a[10];

	for(size_t i=0; i<10; ++i){
		a[i] = i+1;
	}

	for(size_t i=0; i<10; ++i){
		cout << a[i] << endl;
	}

	return 0;
}
