#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string max_str;
	int max_num=0;
	int cnt=0;

	string cur_str;
	string pre_str;

	cout << "please input string end wit eof: ";

	while(cin >> cur_str){
		
		if(cur_str == pre_str){

			++cnt;

			if(cnt > max_num){
				max_num = cnt;
				max_str = cur_str;
			}

		}else{
			cnt = 0;
		}

		pre_str=cur_str;
	}

	++max_num;

	if(max_num != 1){
		cout << "the " << max_str << " appera " << max_num << " times " <<  endl;
	}else{
		cout << "there is no repeated word" << endl;
	}

	return 0;
}
