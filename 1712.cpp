#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (c <= b) { cout << -1 << endl; }
	else {
		int d = a / (c - b);
		cout << d + 1 << endl;
	}
}