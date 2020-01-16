#include <iostream>

using namespace std;
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	int a_1 = a % 10;
	int b_1 = b % 10;
	a /= 10;
	b /= 10;
	int a_10 = a % 10;
	int b_10 = b % 10;
	a /= 10;
	b /= 10;
	int a_100 = a % 10;
	int b_100 = b % 10;
	int r_a = a_1 * 100 + a_10 * 10 + a_100;
	int r_b = b_1 * 100 + b_10 * 10 + b_100;
	if (r_a < r_b) {
		cout << r_b << endl;
	}
	else {
		cout << r_a << endl;
	}
}