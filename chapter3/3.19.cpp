#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vec(10);

	for(vector<int>::iterator i=vec.begin(); i!=vec.end(); ++i){
		*i=2;
	}
	
	for(vector<int>::const_iterator j=vec.begin(); j!=vec.end(); j++){
		cout << *j << " ";
	}

	cout << endl;

	return 0;
}
