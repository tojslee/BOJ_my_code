#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	while (s != ".") {
		stack<char> var;
		bool checker = true;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '[' || s[i] == '(') {
				var.push(s[i]);
			}
			else if (s[i] == ']' || s[i] == ')') {
				if (s[i] == ']') {
					if (var.empty() || var.top() != '[') {
						cout << "no" << endl;
						checker = false;
						break;
					}
					else {
						var.pop();
					}
				}
				else {
					if (var.empty() || var.top() != '(') {
						cout << "no" << endl;
						checker = false;
						break;
					}
					else { var.pop(); }
				}
			}
			else { continue; }
		}
		if (var.empty() && checker) { cout << "yes" << endl; }
		else if (checker) { cout << "no" << endl; }
		getline(cin, s);
	}
}