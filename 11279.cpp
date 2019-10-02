#include <queue>
#include <iostream>
using namespace std;

int main() {
	priority_queue<int> PQueue;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if (a == 0) {
			if (PQueue.empty()) { cout << 0 << "\n"; }
			else { cout << PQueue.top() << "\n"; PQueue.pop(); }
		}
		else {
			PQueue.push(a);
		}
	}
}