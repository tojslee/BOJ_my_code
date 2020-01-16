#include <iostream>
using namespace std;

int main() {
	long long int a, b;
	cin >> a;
	cin >> b;
	long long int max = (a > b) ? a : b;
	for (long long int i = max;; i += max) {
		if (i%a == 0 && i%b == 0) {
			cout << i << endl;
			break;
		}
	}
}