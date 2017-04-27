#include <iostream>

using namespace std;

int main(void)
{
	unsigned int acnt=0, ecnt=0, icnt=0, ocnt=0, ucnt=0;
	char ch;

	cout << "please input text end with eof:";

	while(cin >> ch){
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

			default:
				break;
		}
	}

	cout << "a cnt is : " << acnt << endl;
	cout << "e cnt is : " << ecnt << endl;
	cout << "i cnt is : " << icnt << endl;
	cout << "o cnt is : " << ocnt << endl;
	cout << "u cnt is : " << ucnt << endl;

	return 0;
}
