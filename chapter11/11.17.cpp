#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(void)
{
	istream_iterator<int> in_iter(cin), eof;

	vector<int> ivec(in_iter, eof);

	for(vector<int>::iterator it=ivec.begin(); it!=ivec.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;

	return 0;
}
