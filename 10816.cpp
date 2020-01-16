#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	multiset<int> m;
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf_s("%d", &a);
		m.insert(a);
	}

	int k;
	scanf_s("%d", &k);
	for (int i = 0; i < k; i++) {
		int b;
		scanf_s("%d", &b);
		cout << m.count(b) << "\n";
	}
}