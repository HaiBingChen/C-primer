#include <iostream>
#include <vector>

using namespace std;

int main(void)
{	
	vector<int> v;
	int val;

	cout << "please input int numbers : ";
	
	while(cin >> val){
		v.push_back(val);
	}

	vector<int>::iterator i=v.begin();

	while(i != v.end()){
		(*i)%2 ? (*i)=2*(*i++) : *i++;
	}

	i=v.begin();
	while(i != v.end()){
		cout << *i++ << " ";
	}

	cout << endl;
		
	return 0;
}
