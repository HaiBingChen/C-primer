#include <iostream>
#include <list>

using namespace std;

list<int>::const_iterator find_val(list<int>::const_iterator first, list<int>::const_iterator last, int find_num);

int main(void)
{
	list<int> lst;
	list<int>::const_iterator i;
	int val;

	cout << "please input the number: " << endl;

	while(cin >> val){
		lst.push_back(val);
	}

	cin.clear();

	cout << "please input the find val: "<< endl;
	cin >> val;


	i=find_val(lst.begin(), lst.end(), val);

	if(i != (lst.end())){
		cout << "find val " << val << endl;
	}else{
		cout << "not find val " << val << endl;
	}

	return 0;
}


list<int>::const_iterator find_val(list<int>::const_iterator first, list<int>::const_iterator last, int find_num)
{
	while(first != last){
		
		if(*first++ == find_num){
			return --first;
		}
	}

	return first;
}

