#include <iostream>

using namespace std;

int main() {
	int n;
	int a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cin.ignore(256, ',');
		cin >> b;
		cout << a + b << endl;
	}
}