#ifndef __SCRENN_HPP
#define __SCREEN_HPP

#include <iostream>
#include <string>

class Screen{
public:
	typedef std::string::size_type index;
	Screen(index ht, index wt, const std::string &cntnts = ""):
		cursor(0), height(ht), width(wt)
	{
		contents.assign(ht*wt, ' ');
		if(contents.size() != 0){
			contents.replace(0, cntnts.size(), cntnts);
		}
	}
	char get() const {return contents[cursor];}
	inline char get(index ht, index wd) const;
	index get_cursor() const;
	Screen &move(index r, index c);
	Screen &set(char);
	Screen &set(index, index, char);
	Screen &display(std::ostream &os)
	{ do_display(os); return *this;}
	const Screen &display(std::ostream &os) const
	{ do_display(os); return *this;}

private:

	std::string contents;
	index cursor;
	index height, width;
	void do_display(std::ostream &os) const
	{ 
		index i=0;
		while(i != contents.size()){
			os << contents[i];
			if((i+1) % width == 0){
				os << '\n';
			}

			++i;
		}
	}

};

#endif
