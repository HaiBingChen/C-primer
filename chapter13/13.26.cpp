#include <iostream>
#include "HasPtr_val.hpp"

using namespace std;

int main(void)
{	
	int a=42, b=10;

	HasPtr p1(a, b);

	HasPtr p2(p1);

	p2.set_ptr_val(20);

	cout << static_cast<int *>(p1.get_ptr()) << endl;
	cout << p1.get_ptr_val() << endl;
	cout << static_cast<int *>(p2.get_ptr()) << endl;
	cout << p2.get_ptr_val() << endl;
	
	int c=30, d=5;
	
	HasPtr p3(c, d);

	cout << "&c = " << static_cast<int *>(&c) << endl;
	p2.set_ptr(&c);

	cout << static_cast<int *>(p2.get_ptr()) << endl;
	cout << p2.get_ptr_val() << endl;
	
	//cout << p3->get_ptr_val() << endl;
/*
	*p3 = p1;
	cout << static_cast<int *>(p1.get_ptr()) << endl;
	cout << p1.get_ptr_val() << endl;
	
	HasPtr p4(c, d);

	HasPtr p5(p4);

	cout << static_cast<int *>(p4.get_ptr()) << endl;
	cout << static_cast<int *>(p5.get_ptr()) << endl;

	p4 = *p3;
	cout << static_cast<int *>(p4.get_ptr()) << endl;
	cout << static_cast<int *>(p5.get_ptr()) << endl;
*/	
	return 0;
}
