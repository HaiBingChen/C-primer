#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	multimap<string, string> mmap;
	typedef multimap<string, string>::iterator authors_it;

	string author, book;

	cout << "please input the author and the book: " << endl;

	while(cin >> author >> book){
		mmap.insert(make_pair(author, book));	
	}

	cin.clear();

	cout << "please input the author you want to erase: " << endl;

	cin >> author;

	pair<authors_it, authors_it> it = mmap.equal_range(author);

	if(it.first != it.second){
		mmap.erase(it.first, it.second);
	}else{
		cout << "can't find author" << author << endl;
		return -1;
	}

	for(multimap<string, string>::iterator mit=mmap.begin(); mit!=mmap.end(); ++mit){
		cout << mit->first << " " << mit->second << endl;
	}

	return 0;
}
