#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> buf;
	int val = 0;
	int size = 0;

	cout << "please input a grounp of number(even): ";
	
	while(cin >> val){
		buf.push_back(val);	
	}	

	size = buf.size();

	if(size % 2){
		cout << "the last number no calculate sum, because input numbers is odd" << endl;	
		size -= 1;
	}

	cout << "the value of each two number betwwen is follow:"<< endl;

	for(vector<int>::size_type i=0; i!=size; i+=2){
		cout << buf[i]+buf[i+1] << " ";		
	}

	cout << endl;

	return 0;
}
