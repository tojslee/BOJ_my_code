#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main() {
	int n, k;
	queue<int> q;
	list<int> List;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		List.push_back(i);
	}
	// list initialization

	list<int>::iterator it = List.begin();

	while (!List.empty()) {
		for (int i = 1; i < k; i++) {
			if (*it == List.back()) {
				it = List.begin();
			}
			else { it++; }
		}
		q.push(*it);
		if (*it == List.back()) {
			it = List.erase(it);
			it = List.begin();
		}
		else { it = List.erase(it); }
	}

	cout << "<";
	while (q.size() != 1) {
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">" << endl;
}