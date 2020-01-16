#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	int max = (a > b) ? a : b;
	int min = (a > b) ? b : a;
	for (int k = min;; k--) {
		if (a%k == 0 && b%k == 0) {
			cout << k << endl;
			break;
		}
	}
	for (int j = max;; j += max) {
		if (j%a == 0 && j%b == 0) {
			cout << j << endl;
			break;
		}
	}
}