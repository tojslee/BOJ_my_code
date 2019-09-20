#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	map<string, int> officer;
	//set<string> office;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name, ent;
		cin >> name >> ent;
		if (ent == "enter") {
			officer[name] = 1;
			//office.insert(name);
		}
		else {
			officer[name] = 0;
			//office.erase(name);
		}
	}
	//set<string>::reverse_iterator it;
	map<string, int>::reverse_iterator its;
	for (its = officer.rbegin(); its != officer.rend(); its++) {
		if (its->second) { cout << its->first << "\n"; }
	}
}