#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> v1, v2;
	int tmp_val, equal=1;

	cout << "please input the number1 :(end with 32768)";

	while(1){
		cin >> tmp_val;
		if(tmp_val == 32768)
			break;

		v1.push_back(tmp_val);
	}
/*
	while(cin >> tmp_val){
		v1.push_back(tmp_val);
	}

	cin.clear();
*/
	cout << "please input the number2 :(end with 32768)";

	while(1){
		cin >> tmp_val;
		if(tmp_val == 32768)
			break;

		v2.push_back(tmp_val);
	}
/*
	while(cin >> tmp_val){
		v2.push_back(tmp_val);
	}
*/

	for(size_t i=0; i!=(v1.size()<=v2.size()? v1.size() : v2.size()); ++i){
		
		if(v1[i] != v2[i]){
			equal = 0;
			break;
		}
	}

	cout << "the v1 is " << (equal? "equal " : "not equal ") << "to v2" << endl;

	return equal;

}
