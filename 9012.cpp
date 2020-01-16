#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		stack<char> vps;
		bool checker = true;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '(') {
				vps.push('(');
			}
			else {
				if (vps.empty()) { cout << "NO" << endl; checker = false; break; }
				else {
					vps.pop();
				}
			}
		}
		if (vps.empty() && checker) { cout << "YES" << endl; }
		else if(checker) { cout << "NO" << endl; }
	}
}