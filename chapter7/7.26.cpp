#include <iostream>

using namespace std;

const string make_plural(size_t ctr, const string &word, const string &ending="s")
{
	return (ctr == 1)? word : word+ending;
}

int main(int argc, char *argv[])
{
	string s1="success", s2="failure";

	s1 = make_plural(1, s1);
	s2 = make_plural(0, s2);
    
	cout << s1 << endl;
	cout << s2 << endl;

	return 0;
}

