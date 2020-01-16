#include <iostream>
#include <list>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		list<int> cds;
		for (int j = 0; j < n; j++) { cds.push_back(j + 1); }
		for (int j = 0; j < m; j++) {
			int a;
			cin >> a;
			list<int>::iterator it;
			it = cds.begin();
			int counter = 0;
			while (*it != a) { it++; counter++; }
			if (it == cds.end()) { cds.pop_back(); }
			else if (it == cds.begin()) { cds.pop_front(); }
			else {
				cds.erase(it);
			}
			cds.push_front(a);
			cout << counter << " ";
		}
		cout << "\n";
	}
}