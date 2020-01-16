#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	bool first = true;
	while (q.size() != 1) {
		if (first) {
			q.pop();
			first = false;
		}
		else {
			int a = q.front();
			q.pop();
			q.push(a);
			first = true;
		}
	}
	cout << q.front() << endl;
}