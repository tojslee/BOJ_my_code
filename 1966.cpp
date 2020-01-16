#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> d;
	int t;
	cin >> t;
	int n, m;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		int a;
		for (int j = 0; j < n; j++) {
			cin >> a;
			d.push_back(a);
		}
		// initialization

		deque<int>::iterator it = d.begin();
		for (int j = 0; j < m; j++) {
			deque<int>::iterator th = d.begin();
			int checker = 0;
			bool che = false;
			while (checker != d.size()) {
				if (*th > * it) { che = true; break; }
				else { checker++; th++; }
			}
			if (che) {
				it++;
				d.push_back(d.front());
				d.pop_front();
			}
		}
	}
}