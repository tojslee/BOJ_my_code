#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		if (a != 0) {
			s.push(a);
		}
		else {
			s.pop();
		}
	}
	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum << endl;
}