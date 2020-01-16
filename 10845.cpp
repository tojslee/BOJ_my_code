#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> l;
	int a;
	string s;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> s;
		if (s == "push") {
			int b;
			cin >> b;
			l.push_back(b);
		}
		else if (s == "front") {
			if (l.empty()) { cout << -1 << endl; }
			else { cout << l.front() << endl; }
		}
		else if (s == "pop") {
			if (l.empty()) { cout << -1 << endl; }
			else { cout << l.front() << endl; l.pop_front(); }
		}
		else if (s == "empty") {
			if (l.empty()) { cout << 1 << endl; }
			else { cout << 0 << endl; }
		}
		else if (s == "front") {
			if (l.empty()) { cout << -1 << endl; }
			else { cout << l.front() << endl; }
		}
		else if (s == "back") {
			if (l.empty()) { cout << -1 << endl; }
			else { cout << l.back() << endl; }
		}
		else if (s == "size") {
			cout << l.size() << endl;
		}
	}
}