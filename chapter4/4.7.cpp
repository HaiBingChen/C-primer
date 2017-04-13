#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main(void){
	int a1[10] = {0, 1, 2, 3, 4, 5 ,6 ,7, 8, 9};
	int a2[10];
	vector<int> v1(10, 20);
	vector<int> v2;

	for(size_t i=0; i<10; ++i){
		a2[i] = a1[i];
	}

	for(size_t i=0; i<10; ++i){
		cout << a2[i] << endl;
	}

	for(vector<int>::iterator i=v1.begin(); i!=v1.end(); ++i){
		v2.push_back(*i);
	}

	for(vector<int>::iterator i=v2.begin(); i!=v2.end(); ++i){
		cout << *i << endl;
	}

	return 0;
}
