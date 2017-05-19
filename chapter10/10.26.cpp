#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	multimap<string, string> mmap;

	string author, book;

	cout << "please input the author and the book: " << endl;

	while(cin >> author >> book){
		mmap.insert(make_pair(author, book));	
	}

	cin.clear();

	cout << "please input the author you want to erase: " << endl;

	cin >> author;

	multimap<string, string>::iterator it = mmap.find(author);

	if(it != mmap.end()){
		multimap<string, string>::size_type num = mmap.count(author);
		multimap<string, string>::size_type num_tmp=0;

		while(num_tmp++ < num){
			mmap.erase(it++);
		}

	}else{
		cout << "can't find author" << author << endl;
		return -1;
	}

	for(multimap<string, string>::iterator mit=mmap.begin(); mit!=mmap.end(); ++mit){
		cout << mit->first << " " << mit->second << endl;
	}

	return 0;
}
