#include <iostream>
#include <string>
#include <list>
#include <deque>

using namespace std;

bool find_delete_string(list<string> &tmp_slst, string sval);
deque<string>::iterator find_delete_string(deque<string> &tmp_slst, string sval);

int main(void)
{
	list<string> slst;
	deque<string> sdeq;
	string sval;

	cout << "please input some string: " << endl;

	while(cin >> sval){
		slst.push_back(sval);
		sdeq.push_back(sval);
	}

	cin.clear();

	cout << "please input the delete string:" << endl;
	cin >> sval;

	if(find_delete_string(slst, sval)){
		cout << "find " << sval << " and delete it" << endl;
	}else{
		cout << "can't fine " << sval << endl;
	}

	if(find_delete_string(sdeq, sval) != sdeq.end()){
		cout << "find " << sval << " and delete it" << endl;
	}else{
		cout << "can't fine " << sval << endl;
	}

	return 0;
}

bool find_delete_string(list<string> &tmp_slst, string sval)
{
	list<string>::iterator beg = tmp_slst.begin();

	while(beg != tmp_slst.end()){
		if(*beg == sval){
			tmp_slst.erase(beg);
			--beg;
			return 1;
		}

		++beg;
	}

	return 0;
}

deque<string>::iterator find_delete_string(deque<string> &tmp_sdeq, string sval)
{
	deque<string>::iterator beg = tmp_sdeq.begin();

	while(beg != tmp_sdeq.end()){
		if(*beg == sval){
			tmp_sdeq.erase(beg);
			--beg;
			return beg;
		}

		++beg;
	}

	return beg;
}
