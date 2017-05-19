#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <cstdlib>

using namespace std;

int main(void){
	string line, read_book, answer;
	vector<string> book_vec;
	set<string> sset;
	bool time_over = false;

	cout << "please input the book to read file: " << endl;

	cin >> read_book;

	ifstream input(read_book.c_str());

	while(getline(input, line)){
		book_vec.push_back(line);
	}

	input.clear();
	input.close();

	srand((unsigned) time(NULL));

	while(!time_over && !book_vec.empty()){
		cout << "would you like to read a book(yes/no):";
		cin >> answer;

		if(answer == "yes"){
			int i= rand() % book_vec.size();

			string book_name = book_vec[i];
		
			cout << "you can read the book: " << book_name << endl;
			sset.insert(book_name);
			book_vec.erase(book_vec.begin()+i);

			cout << "do you have read this book:";
			cin >> answer;

			if(answer == "no"){
				sset.erase(book_name);
				book_vec.push_back(book_name);
			}
		}

		cout << "time over?:" ;
		cin >> answer;

		if(answer == "yes"){
			time_over = true;
		}
	}

	if(time_over){
		cout << "book read: " << endl;
		for(set<string>::iterator sit=sset.begin(); sit!=sset.end(); ++sit){
			cout << *sit << endl;
		}

		cout << "book not read: " << endl;
		for(vector<string>::iterator vit=book_vec.begin(); vit!=book_vec.end(); ++vit){
		cout << *vit << endl;
		}	
	}else{
		cout << "you have read all these books" << endl;
	}

	return 0;
}
