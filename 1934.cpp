#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a, b;
	for (int i = 0; i < t; i++) {
		cin >> a;
		cin >> b;
		int max = (a > b) ? a : b;
		for (int j = max;; j+=max) {
			if (j%a == 0 && j%b == 0) {
				cout << j << endl;
				break;
			}
		}
	}
}