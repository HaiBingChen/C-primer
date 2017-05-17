#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{	
	string line1 = "We were her pride of 10 she name us:";
	string line2 = "Benjamin, phoenix, the Prodigal";
	string line3 = "and perspicacious pacific Suzanne";

	string sentence = line1 + ' ' + line2 + ' ' + line3;

	string char_word = " \t:,\v\r\n\f";
	string cut_word;

	string::size_type start_pos=0, end_pos=0;

	int max_len = 0, min_len = 10;
	int word_count=0;
	vector<string> max_str;
	vector<string> min_str;

	while((start_pos = sentence.find_first_not_of(char_word, start_pos)) != string::npos){
		end_pos = start_pos;
		end_pos = sentence.find_first_of(char_word, end_pos);
		cut_word = sentence.substr(start_pos, end_pos-start_pos);
		start_pos = end_pos;
		
		++word_count;

		if(cut_word.size() > max_len){
			max_len = cut_word.size();
			max_str.clear();
			max_str.push_back(cut_word);
		}else if(cut_word.size() == max_len){
			max_str.push_back(cut_word);
		}

		if(cut_word.size() < min_len){
			min_len = cut_word.size();
			min_str.clear();
			min_str.push_back(cut_word);
		}else if(cut_word.size() == min_len){
			min_str.push_back(cut_word);
		}
	}

	cout << "word count is :" << word_count << endl;
	cout << "max len word is: ";
	for(vector<string>::iterator it=max_str.begin(); it!=max_str.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;
	
	cout << "min len word is: ";
	for(vector<string>::iterator it=min_str.begin(); it!=min_str.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
