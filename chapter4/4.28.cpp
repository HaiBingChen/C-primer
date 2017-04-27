#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> v1;
	int val;

	cout << "please input int number :";
	while(cin >> val){
		v1.push_back(val);
	}
   
	cout << "v1 size is :" << v1.size()<<endl;

	int *p = new int[v1.size()];

	int *p_t=p;

	for(vector<int>::iterator ix=v1.begin(); ix!=v1.end(); ++ix, ++p_t){
		*p_t = *ix;
		cout << *p_t << " ";
	}

	cout << endl;

	delete [] p;
}
