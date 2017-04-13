#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> buf;
	int val = 0;
	int size;

	cout << "please input a grounp of number(even): ";
	
	while(cin >> val){
		buf.push_back(val);	
	}	

	size = buf.size();

	for(vector<int>::size_type i=0; i!=(size/2+size%2); i++){
		if(i != size-i-1){
			cout << buf[i]+buf[size-i-1] << " ";		
		}else{
			cout << buf[i] << "";
		}
	}

	cout << endl;

	return 0;
}
