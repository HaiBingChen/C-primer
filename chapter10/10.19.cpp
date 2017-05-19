#include <iostream>
#include <sstream>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
	map<string, vector<pair<string, string> > > family_map;
	string family_name;
	string child_name;
	string birthday;
	vector<pair<string, string> > v_child_name;
	string line;

	cout << "please input the family name and child name:" << endl;
	while(getline(cin, line)){
		istringstream name(line);

		name >> family_name;

		while(name >> child_name >> birthday){
			
			v_child_name.push_back(make_pair(child_name, birthday));
		}

		family_map.insert(make_pair(family_name, v_child_name));
	}

	cin.clear();

	cout << "please input the family name that you want to find: " << endl;
	cin >> family_name;

	map<string, vector<pair<string, string> > >::iterator it = family_map.find(family_name);

	if(it != family_map.end()){
		for(vector<pair<string, string> >::iterator vit=it->second.begin(); vit!=it->second.end(); ++vit){
		cout << vit->first << " " << vit->second << endl;
		}
	}else{
		cout << "can't find the family name " << family_name << endl; 
	}

	cout << endl;

	return 0;
}
