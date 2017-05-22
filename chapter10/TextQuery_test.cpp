#include <iostream>
#include "TextQuery.hpp"
#include <fstream>
#include <cstdlib>

using namespace std;

string make_plural(size_t ctr,const string &word, const string &ending)
{
	return (ctr>1) ? word+ending : word;
}

ifstream& open_file(ifstream& in, const string file)
{
	in.close();
	in.clear(); 
	in.open(file.c_str());
    return in;
}

void printf_results(const set<TextQuery::line_no> &locs,
					const string &sought, const TextQuery &file)
{
	typedef set<TextQuery::line_no> line_nums;	
	line_nums::size_type size = locs.size();

	cout << "\n" << sought << " occurs " 
		 << size << " "
		 << make_plural(size, "time", "s") << endl;

	line_nums::const_iterator it=locs.begin();
	for(; it!=locs.end(); ++it){
		cout << "\t(line " 
			 << (*it) + 1 << ")"
			 << file.text_line(*it) << endl;
	}	
}

int main(int argc, char **argv)
{
	ifstream infile;

	if(argc < 2 || !open_file(infile, argv[1])){
		cerr << "No input file!" << endl;
		return EXIT_FAILURE;
	}

	TextQuery tq;
	tq.read_file(infile);

	while(1){
		cout << "enter word to look for, or q to quit: ";

		string s;

		cin >> s;

		if(!cin || s == "q"){
			break;
		}

		set<TextQuery::line_no> locs=tq.run_query(s);

		printf_results(locs, s, tq);
	}

	return 0;
}
