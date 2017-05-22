#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <fstream>

using namespace std;
bool is_shorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

bool GT4(const string &s)
{
	return s.size() >= 4;
}

int main(void)
{
	vector<string> svec;
	string book_name, word;
	
	cout << "please input the book_name: " << endl;

	cin >> book_name;

	ifstream input(book_name.c_str());

	while(input >> word){
		svec.push_back(word);
	}

	input.clear();
	input.close();

	sort(svec.begin(), svec.end());

	vector<string>::iterator it=unique(svec.begin(), svec.end());

	svec.erase(it, svec.end());

	stable_sort(svec.begin(), svec.end(), is_shorter);

	vector<string>::size_type wc = svec.end()- find_if(svec.begin(), svec.end(), GT4);

	cout << wc << " " << (wc>1? " words ":" word ") << "4 characters or longer" << endl;

	cout << "the different words are: " << endl;
	for(vector<string>::iterator it=svec.begin(); it!=svec.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;

	return 0;
}
