#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void)
{
    string string1("this is string1");
    string string2("this is string2");
    const char *string1_c="this is string1";
    const char *string2_c="this is string2";
    char res=0;

    if(string1 < string2){
        cout<<"string1 is smaller than string2"<<endl;
    }else if(string1 > string2){
        cout<<"string1 is larger than string2"<<endl;
    }else{
        cout<<"string1 is equal to string2"<<endl;
    }

    res = strcmp(string1_c, string2_c);
    if(res < 0){
        cout << "string1_c is smaller than string2" << endl;
    }else if(res > 0){
 	cout << "string1_c is larger than string2_c" << endl;
    }else{
        cout << "string1_c is equal to string2_c" << endl;
    }
}
