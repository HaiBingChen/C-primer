#include <iostream>

using namespace std;

int main(void)
{
	unsigned int acnt=0, ecnt=0, icnt=0, ocnt=0, ucnt=0;
	unsigned int s_cnt=0, t_cnt=0, n_cnt=0;
	char ch;

	cout << "please input text end with eof:";

	//不能使用cin >> ch,因为cin >> 会忽略掉空格制表符和回车
	while(cin.get(ch)){
		switch(ch){
			case 'a':
			case 'A':
			{
				++acnt;
				break;
			}

			case 'e':
			case 'E':
			{
				++ecnt;
				break;
			}

			case 'i':
			case 'I':
			{
				++icnt;
				break;
			}

			case 'o':
			case 'O':
			{
				++ocnt;
				break;
			}

			case ' ':
				++s_cnt;
				break;
	
			case '\n':
				++n_cnt;
				break;

			case '\t':
				++t_cnt;
				break;

			default:
				break;
		}
	}

	cout << "a cnt is : " << acnt << endl;
	cout << "e cnt is : " << ecnt << endl;
	cout << "i cnt is : " << icnt << endl;
	cout << "o cnt is : " << ocnt << endl;
	cout << "u cnt is : " << ucnt << endl;
	cout << "s_cnt is : " << s_cnt << endl;
	cout << "t_cnt is : " << t_cnt << endl;
	cout << "n_cnt is : " << n_cnt << endl;

	return 0;
}
