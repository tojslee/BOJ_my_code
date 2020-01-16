#include <iostream>
using namespace std;
int main() {
	long long int a, b;
	cin >> a;
	cin >> b;
	long long int min = (a > b) ? b : a;
	long long int gcd;
	for (long long int k = min;; k--) {
		if (a%k == 0 && b%k == 0) {
			gcd = k;
			break;
		}
	}
	int binary[100] = { 0 };
	int position = 0;
	while (true) {
		binary[position] = gcd % 2;
		gcd = gcd / 2;
		position++;
		if (gcd == 0) { break; }
	}
	for (int i = position - 1; i >= 0; i--) {
		cout << binary[i];
	}
	cout << endl;
}