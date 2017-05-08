#include <iostream>
#include <string>

using namespace std;

#define NDEBUG

int main(void)
{
	string cur_string, pre_string;
	int find=0;

	cout << "please input a serial numbers:";

	while(cin >> cur_string){
	
	#ifndef NDEBUG
		cout << cur_string << " ";
	#endif

		if(cur_string == pre_string){
			find = 1;
			break;
		}

		pre_string = cur_string;
	}

	if(find){
		cout << "\nfind two same string ,the same string is " << cur_string << endl;
	}else{
		cout << "\ncan not find two same string" << endl;
	}
}
