#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a % 4 == 1) {
		if ((a / 4) % 2 == 0) {
			cout << 1 << endl;
		}
		else { cout << 5 << endl; }
	}
	else { cout << a % 4 << endl; }
}