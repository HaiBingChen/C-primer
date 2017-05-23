#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>

using namespace std;

int main(void)
{
	string file_name;

	cout << "please input the file1 name to save the odd num:" << endl;
	cin >> file_name;
	ofstream output1(file_name.c_str());
	ostream_iterator<int> out_iter1(output1, " ");

	cin.clear();

	cout << "please input the file2 name to save the oushu num:" << endl;
	cin >> file_name;
	ofstream output2(file_name.c_str());
	ostream_iterator<int> out_iter2(output2, "\n");

	cin.clear();

	istream_iterator<int> in_iter(cin), eof;

	while(in_iter != eof){
		int tmp_num = *in_iter++;
	
		if(tmp_num % 2){
			*out_iter1++ = tmp_num;
		}else{
			*out_iter2++ = tmp_num;
		}
	}

	return 0;
}
