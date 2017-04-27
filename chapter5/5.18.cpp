#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	vector<string *> v;
	string str;

	cout << "please input some string:";
	while(cin >> str){
		string *pstr = new string;
		*pstr = str;
		v.push_back(pstr);
	}

	vector<string *>::iterator i = v.begin();

	do{
		cout << **i << " len is "<< (*i)->size()<<endl;
	}while(++i != v.end());
		
	return 0;
}
