#include <queue>
#include <iostream>
#include <functional>
#include <vector>
using namespace std;

int main() {
	priority_queue<int, vector<int>, greater<int>> PQueue;
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf_s("%d", &a);
		if (a == 0) {
			if (PQueue.empty()) { cout << 0 << "\n"; }
			else { cout << PQueue.top() << "\n"; PQueue.pop(); }
		}
		else { PQueue.push(a); }
	}
}