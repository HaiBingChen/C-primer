#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

	vector<int> ivec(ia, ia+11);
	list<int> ilst(ia, ia+11);

	
	for(vector<int>::iterator vit=ivec.begin(); vit!=ivec.end(); ++vit){
		if(*vit % 2){
			ivec.erase(vit);
			--vit;
		}
	}

	for(list<int>::iterator lit=ilst.begin(); lit!=ilst.end(); ++lit){
		if(!(*lit % 2)){
			ilst.erase(lit);
			--lit;
		}
	}

	cout << "vector is:" << endl;
	for(vector<int>::iterator vit=ivec.begin(); vit!=ivec.end(); ++vit){
		cout << *vit << " ";
	}
	cout << endl;

	cout << "list is:" << endl;
	for(list<int>::iterator lit=ilst.begin(); lit!=ilst.end(); ++lit){
		cout << *lit << " ";
	}
	cout << endl;

	return 0;
}
