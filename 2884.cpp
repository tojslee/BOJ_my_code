#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	if (m < 45) {
		if (h != 0) {
			cout << h - 1 << " " << m + 15 << endl;
		}
		else {
			cout << 23 << " " << m + 15 << endl;
		}
	}
	else {
		cout << h << " " << m - 45 << endl;
	}
}