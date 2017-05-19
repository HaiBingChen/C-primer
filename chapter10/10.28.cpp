#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	multimap<string, string> mmap;
	typedef multimap<string, string>::iterator authors_it;

	string author, book, author_tmp;

	cout << "please input the author and the book: " << endl;

	while(cin >> author >> book){
		mmap.insert(make_pair(author, book));	
	}

	cin.clear();

	for(char ch='A'; ch != 'Z'+1; ++ch){
		cout << "Author Nmaes Beginning withe \'" << ch << "\'" << endl;
		for(authors_it it=mmap.begin(); it!=mmap.end(); ++it){

			if(it->first[0] == ch){
				if(it->first != author_tmp){
					cout << it->first << ", " << it->second << ", ";
					author_tmp = it->first;
				}else{
					cout << it->second << ", ";
				}
				
			}
		}

		cout << endl;
	}

	return 0;
}
