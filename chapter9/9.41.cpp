#include <iostream>
#include <string>

using namespace std;

string greet(string form, string lastname, string title,
			 string::size_type pos, int length){
	string::iterator beg, end;

	form.replace(form.find("Da"), 5, lastname);

	form.replace(form.find("Ms"), 2, title, pos, length);
		
	return form;
}

int main(void){
	string generic1("Dear Ms Daisy:");
	string generic2("MrsMsMissPeople");
	string lastName("AnnaP");

	string salute = greet(generic1, lastName, generic2, 5, 4);
		
	cout << salute << endl;

	return 0;
}
