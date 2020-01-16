#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > b - c) {
			cout << "do not advertise" << endl;
		}
		else if (a == b - c) {
			cout << "does not matter" << endl;
		}
		else { cout << "advertise" << endl; }
	}
}