#include "TextQuery.hpp"
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <stdexcept>

using namespace std;

void TextQuery::store_file(ifstream &is)
{
	string textline;
	while(getline(is, textline)){
		line_of_text.push_back(textline);
	}
}

void TextQuery::build_map()
{
	for(line_no line_num=0; line_num!=line_of_text.size(); ++line_num){
		istringstream line(line_of_text[line_num]);
		string word;
		while(line >> word){
			word_map[word].insert(line_num);
		}
	}
}

set<TextQuery::line_no> TextQuery::run_query(const string &query_word) const
{
	map<string, set<line_no> >::const_iterator loc = word_map.find(query_word);

	if(loc == word_map.end()){
		return set<line_no>();
	}else{
		return loc->second;
	}
}

string TextQuery::text_line(line_no line) const
{
	if(line < line_of_text.size()){
		return line_of_text[line];
	}

	throw std::out_of_range("line number out of range");
}

