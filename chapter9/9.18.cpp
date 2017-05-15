#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(void)
{
	list<int> ilst;
	deque<int> ideq1;
	deque<int> ideq2;
	int ival;

	cout << "please input int number:" << endl;
	while(cin >> ival){
		ilst.push_back(ival);
	}

	for(list<int>::iterator iter=ilst.begin(); iter!=ilst.end(); ++iter){
		if(*iter % 2){
			ideq1.push_back(*iter);	
		}else{
			ideq2.push_back(*iter);
		}
	}	

	cout << "deque1 is:" << endl;
	for(deque<int>::iterator i=ideq1.begin(); i!=ideq1.end(); ++i){
		cout << *i << " ";
	}	
	cout << endl;

	cout << "deque2 is:"<< endl;
	for(deque<int>::iterator i=ideq2.begin(); i!=ideq2.end(); ++i){
		cout << *i << " ";
	}	
	cout << endl;

	return 0;
}
