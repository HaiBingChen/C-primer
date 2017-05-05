#include <iostream>

using namespace std;

int main(void)
{
	int ia[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	for(int (*p)[3]=ia; p!=ia+3; ++p){
		for(int *q=*p; q!=*p+3; ++q){
			cout << *q << "";
		}
		cout <<endl;
	}
}
