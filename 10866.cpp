#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	list<int> List;
	int a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push_front") {
			cin >> a;
			List.push_front(a);
		}
		else if (s == "push_back") {
			cin >> a;
			List.push_back(a);
		}
		else if (s == "pop_front") {
			if (List.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << List.front() << endl;
				List.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (List.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << List.back() << endl;
				List.pop_back();
			}
		}
		else if (s == "size") {
			cout << List.size() << endl;
		}
		else if (s == "empty") {
			cout << List.empty() << endl;
		}
		else if (s == "front") {
			if (List.empty()) { cout << -1 << endl; }
			else{ cout << List.front() << endl; }
		}
		else if (s == "back") {
			if (List.empty()) { cout << -1 << endl; }
			else { cout << List.back() << endl; }
		}
	}
}