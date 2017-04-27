#include <iostream>

using namespace std;

int main(void)
{
	unsigned int ff_cnt=0, fl_cnt=0, fi_cnt=0;

	char cur_ch = 0;
	char pre_ch = 0;

	cout << "please input text end with eof:";

	//不能使用cin >> ch,因为cin >> 会忽略掉空格制表符和回车
	while(cin.get(cur_ch)){
		
		if(pre_ch == 'f'){
			switch(cur_ch){
				case 'f':
					++ff_cnt;
					break;

				case 'l':
					++fl_cnt;
					break;

				case 'i':
					++fi_cnt;
					break;

				default:
					break;
			}
		}

		pre_ch = cur_ch;
	}

	cout << "ff_cnt is : " << ff_cnt << endl;
	cout << "fl_cnt is : " << fl_cnt << endl;
	cout << "fi_cnt is : " << fi_cnt << endl;

	return 0;
}
