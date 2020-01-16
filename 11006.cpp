#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b;

	for (int i = 0; i < n; i++) {
		cin >> a;
		cin >> b;
		cout << 2 * b - a << " " << a - b << endl;
	}
}