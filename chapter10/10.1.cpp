#include <iostream>
#include <vector>

using namespace std;

typedef vector<pair<string, int> > vp_type;

int main(void)
{
	vp_type pvec;
	pair<string, int> next_p;

	cout << "please input the string and int: " << endl;
	while(cin >> next_p.first >> next_p.second){
		pvec.push_back(next_p);
	}

	for(vp_type::iterator it=pvec.begin(); it!=pvec.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;
}
