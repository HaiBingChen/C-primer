#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main(void){
	int a1[5] = {0, 1, 2, 3, 4};
	int a2[5] = {0, 2, 1, 3, 4};
	int no_equal=0;

	vector<int>::size_type val;
	vector<int> v1;
	vector<int> v2;

	for(size_t i=0; i<5; ++i){
		if(a1[i] != a2[i]){
			cout << "a1 is not equal to a2" << endl;
			no_equal = 1;
			break;
		}
	}
	
	if(!no_equal){
		cout << "a1 is equal to a2" << endl;
	}

	cout << "please input a serial num to vector1 end with no munber: ";
	cin >> val;
	while( val != -1){
		v1.push_back(val);
		cin >> val;
	}

	cout << "please input a serial num to vector2 end with no munber: ";
	cin >> val;
	while(val != -1){
		v2.push_back(val);
		cin >> val;
	}
	
	if(v1.size() != v2.size()){
		cout << "v1 is no equal to v2" << endl;
	}else if(v1.size() == 0){
		cout << "v1 is equal to v2" << endl;
	}else{
		vector<int>::iterator i1 = v1.begin();
		vector<int>::iterator i2 = v2.begin();

		while( *i1==*i2 && i1!=v1.end() && i2!=v2.end()){
			++i1;
			++i2;
		}	
		
		if(i1 == v1.end()){
			cout << "v1 is equal to v2" << endl;
		}else{
			cout << "v1 is no equal to v2" << endl;
		}
	}

	return 0;
}
