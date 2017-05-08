#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s1, s2, s3;

	do{
		cout << "please input two string: ";

		cin >> s1 >> s2;

		if(s1 < s2){
			cout << "s1 is smaller than s2" << endl;
		}else if(s1 == s2){
			cout << "s1 is equal to s2" <<  endl;
		}else{
			cout << "s1 is larger than s2" <<  endl;
		}

		cout << "do you want to continue? please input y/n:";
		
		cin >> s3;

	}while(s3[0] != 'n' && s3[0] != 'N');

	return 0;
}
