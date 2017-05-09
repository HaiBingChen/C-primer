#include "main.h"

int main(int argc, char * argv[])
{
	const string s1="abc";
	const string s2="efgh";

	cout << s1 << " is " << (is_shorter(s1, s1)? "longer" : "shorter") << " than " << s2 << endl;

	return 0;
}
