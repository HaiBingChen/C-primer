#include <iostream>
#include <sstream>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
	map<string, vector<string> > family_map;
	string family_name;
	string child_name;
	vector<string> v_child_name;
	string line;

	cout << "please input the family name and child name:" << endl;
	while(getline(cin, line)){
		istringstream name(line);

		name >> family_name;

		while(name >> child_name){
			v_child_name.push_back(child_name);
		}

		family_map.insert(make_pair(family_name, v_child_name));
	}

	cin.clear();

	cout << "please input the family name that you want to find: " << endl;
	cin >> family_name;

	map<string, vector<string> >::iterator it = family_map.find(family_name);

	if(it != family_map.end()){
		for(vector<string>::iterator vit=it->second.begin(); vit!=it->second.end(); ++vit){
		cout << *vit << " ";
		}
	}else{
		cout << "can't find the family name " << family_name << endl; 
	}

	cout << endl;

	return 0;
}
