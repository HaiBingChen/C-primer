#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	map<string, int> smap;
	string word;

	cout << "please input some word: " << endl;

	while(cin >> word){
		pair<map<string, int>::iterator, bool> ret = smap.insert(make_pair(word, 1));

		if(!ret.second){
			++ret.first->second;
		}
	}

	for(map<string, int>::iterator it=smap.begin(); it!=smap.end(); ++it){
		cout << it->first << " " << it->second << endl;
	}
}
