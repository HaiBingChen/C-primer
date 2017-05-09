#include "sale_item.hpp"
#include <iostream>

using namespace std;

int main(void)
{
	sale_item total, trans;

	cout << "enter some transactions(Ctrl+Z to end):";

	if(total.input(cin)){	
		while(trans.input(cin)){

			if(total.same_isbn(trans)){
				total.add(trans);
			}else{
				total.output(cout) << endl;
				total =trans;
			}
		}

		total.output(cout) << endl;
	}else{
		cout << "no data?" << endl;
	}

	return 0;
}
