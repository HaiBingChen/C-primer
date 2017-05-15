#include <iostream>
#include <list>

using namespace std;

bool find_val(list<int>::const_iterator first, list<int>::const_iterator last, int find_num);

int main(void)
{
	list<int> lst;
	int val;

	cout << "please input the number: " << endl;

	while(cin >> val){
		lst.push_back(val);
	}

	cin.clear();

	cout << "please input the find val: "<< endl;
	cin >> val;

	if(find_val(lst.begin(), lst.end(), val)){
		cout << "find val " << val << endl;
	}else{
		cout << "not find val " << val << endl;
	}

	return 0;
}


bool find_val(list<int>::const_iterator first, list<int>::const_iterator last, int find_num)
{
	while(first != last){
		
		if(*first++ == find_num){
			return 1;
		}
	}

	return 0;
}

