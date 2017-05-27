#include <iostream>
#include "Message.hpp"
#include "Folder.hpp"

using namespace std;

int main(void)
{
	Message m1("this is m1");
	Folder f1;
	
	m1.save(f1);

	f1.remove(m1);

	Message m2(m1);

	return 0;
}
