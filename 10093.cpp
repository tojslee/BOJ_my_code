#include <iostream>
using namespace std;

int main() {
	long long int a, b;
	cin >> a >> b;
	cout << abs(b - a) - 1 << endl;
	if (a < b) {
		for (long long int i = a + 1; i < b - 1; i++) { cout << i << " "; }
		cout << b - 1 << endl;
	}
	else {
		for (long long int i = b + 1; i < a; i++) { cout << i << " "; }
		cout << a - 1 << endl;
	}
}