#include <iostream>
#include <vector>
#include <string>
using namespace std;

double sum1(vector<double>::const_iterator beg)
{
	double sum=0;

	while(*beg != 3.14159){
		sum += *beg++;
	}

	return sum;
}

double sum2(vector<double>::const_iterator beg, vector<double>::const_iterator end)
{
	double sum=0;

	while(beg != end){
		sum += *beg++;
	}

	return sum;
}

double sum3(vector<double>::const_iterator beg, size_t len)
{
	double sum=0;

	for(size_t i=0; i<len; ++i){
		sum += *beg++;
	}

	return sum;
}

int main(void)
{
	vector<double> v;
	double val;

	cout << "please input double num:";

	while(1){
		cin >> val;

		v.push_back(val) ;

		if(val == 3.14159){
			break;
		}

	}

	cout << "sum1 is " << sum1(v.begin()) <<endl;
	cout << "sum2 is " << sum2(v.begin(), v.end()-1) << endl;
	cout << "sum3 is " << sum3(v.begin(), v.size()-1) << endl;

	return 0;
}
