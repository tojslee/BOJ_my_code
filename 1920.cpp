#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	scanf_s("%d", &n);
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		scanf_s("%d", &a);
		v.push_back(a);
	}
	sort(v.begin(), v.begin() + v.size());
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++) {
		int b;
		scanf_s("%d", &b);
		if (binary_search(v.begin(), v.begin() + v.size(), b)) { cout << 1 << "\n"; }
		else { cout << 0 << "\n"; }
	}
}