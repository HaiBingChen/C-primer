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
	
	cout << "the value of each two number betwwen is follow:"<< endl;

	for(vector<int>::const_iterator i=buf.begin(); i<buf.end(); i+=2){
		cout << *i+*(i+1) << " ";		
	}

	if(buf.size() % 2){
		cout << "the last number no calculate sum, because input numbers is odd" << endl;	
	}

	cout << endl;

	return 0;
}
