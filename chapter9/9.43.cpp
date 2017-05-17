#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	stack<char> ct;
	string exp;

	cout << "please input exp: " << endl;
	cin >> exp;

	string::iterator it=exp.begin();

	while(it != exp.end()){
		if(*it!=')'){
			ct.push(*it);
		}else{
			while( ct.top()!='(' && !ct.empty()){
				ct.pop();
			}

			if(ct.empty()){
				cout << "parentheses are not matched" << endl;
			}else{
				ct.pop();
				ct.push('@');
			}
		}

		++it;
	}

	cout << endl;
	
	return 0;
}
