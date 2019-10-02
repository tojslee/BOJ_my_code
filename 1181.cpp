#include <iostream>
#include <utility>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main() {
	int n;
	set<pair<int, string>> se;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		pair<int, string> p(s.length(), s);
		se.insert(p);
	}

	for (pair<int, string>a:se) { cout << a.second << "\n"; }
}