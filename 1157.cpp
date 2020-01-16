#include <iostream>
#include <set>
#include <string>
#include <map>
using namespace std;

int main() {
	multiset<char> chars;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		chars.insert(toupper(s[i]));
	}

	multiset<char>::iterator iter;
	pair<map<char, int>::iterator, bool> ret;
	iter = chars.begin();
	map<char, int> m;
	for (int i = 0; i < chars.size(); i++) {
		ret = m.insert(pair<char, int>(*iter, 1));
		if (ret.second == false) {
			m[*iter]++;
		}
		iter++;
	}

	map<char, int>::iterator mapiter;
	int max = 0;
	char har;
	int num = 0;
	for (mapiter = m.begin(); mapiter != m.end(); mapiter++) {
		if (max < mapiter->second) {
			num = 1;
			har = mapiter->first;
			max = mapiter->second;
		}
		else if (max == mapiter->second) {
			num++;
		}
	}

	if (num > 1 || num == 0) {
		cout << "?" << endl;
	}
	else {
		cout << har << endl;
	}
}