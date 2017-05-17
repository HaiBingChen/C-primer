#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str="ab2c3d7R4E6";
	string number="0123456789";
	string letter="abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	string::size_type pos=0;

	cout << "find_first_of number: " << endl;
	while((pos=str.find_first_of(number, pos)) != string::npos){
		cout << "find number at index " << pos
			 << ",elemet is " << str[pos] << endl;

		++pos;
	}

	pos = 0;
	cout << endl;

	cout << "find_first_of letter: " << endl; 
	while((pos=str.find_first_of(letter, pos)) != string::npos){
		cout << "find number at index " << pos
			 << ",elemet is " << str[pos] << endl;

		++pos;
	}

	pos = 0;
	cout << endl;

	cout << "find_first_not_of number: " << endl;
	while((pos=str.find_first_not_of(letter, pos)) != string::npos){
		cout << "find number at index " << pos
			 << ",elemet is " << str[pos] << endl;

		++pos;
	}

	pos = 0;
	cout << endl;

	cout << "find_first_not_of letter: " << endl;
	while((pos=str.find_first_not_of(number, pos)) != string::npos){
		cout << "find number at index " << pos
			 << ",elemet is " << str[pos] << endl;

		++pos;
	}
	return 0;
}
