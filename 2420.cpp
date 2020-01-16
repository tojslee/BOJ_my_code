#include <iostream>

using namespace std;

int main() {
	double a, b;

	cin >> a;
	cin >> b;
	if (a - b < 0) {
		cout << b - a << endl;
	}
	else {
		cout << a - b << endl;
	}
}