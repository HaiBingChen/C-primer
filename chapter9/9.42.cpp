#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	stack<string> st;
	string word;

	cout << "please input some word: " << endl;

	while(cin >> word){
		st.push(word);
	}

	cin.clear();

	while(!st.empty()){
		cout  << st.top() << " ";
		st.pop();
	}

	cout << endl;
	
	return 0;
}
