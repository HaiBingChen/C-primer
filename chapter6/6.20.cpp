#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string cur_string, pre_string;
	int find=0;

	cout << "please input a serial numbers:";

	while(cin >> cur_string){
		if(cur_string == pre_string){
			find = 1;
			break;
		}

		pre_string = cur_string;
	}

	if(find){
		cout << "find two same string ,the same string is " << cur_string << endl;
	}else{
		cout << "can not find two same string" << endl;
	}
}
