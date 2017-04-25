#include <iostream>
#include <vector>

using namespace std;

int main(void){
	char a[]="1234567890";
	vector<char> v(a+1, a+5);

	for(vector<char>::iterator i=v.begin(); i!=v.end(); ++i){
		cout << *i << endl;
	}
}
