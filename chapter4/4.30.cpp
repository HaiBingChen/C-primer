#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void){
	const char *s1="this is s1";
	const char *s2="this is s1";

	size_t len = strlen(s1) + strlen(s2);

	char *s3 = new char[len+1];

	strcpy(s3, s1);
	strcat(s3, s2);

	char *p=s3;

	while(*p != '\0'){
		cout << *p;
		++p;
	}

	cout << endl;

	delete [] s3;


	string s1_s("this is s1");
	string s2_s("this is s2");

	string s3_s;
	s3_s += s1_s;
	s3_s += s2_s;

	cout << s3_s << endl;

	return 0;
}
