#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vec(10);

	for(vector<int>::iterator i=vec.begin(); i!=vec.end(); ++i){
		*i=2;
	}
	
	return 0;
}
