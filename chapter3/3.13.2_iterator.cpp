#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> buf;
	int val = 0;

	cout << "please input a grounp of number(even): ";
	
	while(cin >> val){
		buf.push_back(val);	
	}	

	for(vector<int>::const_iterator i=buf.begin(), j=buf.end()-1; i<=j; ++i, --j){
		if(i==j){
			cout << *i << " ";
		}else{
			cout << *i+*j << " ";		
		}
	}

	cout << endl;

	return 0;
}
