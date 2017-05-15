#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(void)
{
	char *sa[] = {"MON", "TUE", "WES", "THR", "FIR", "STA", "SUN"};
	list<char *> clst(sa, sa+7);
	vector<string> svec;

	svec.assign(clst.begin(), clst.end());

	for(vector<string>::iterator it=svec.begin(); it!=svec.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;

	return 0;
}
