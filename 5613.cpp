#include <iostream>

using namespace std;

int main() {
	int a, b;
	char x;
	cin >> a;
	cin >> x;
	while (x != '=') {
		cin >> b;
		if (x == '+') { a = a + b; }
		else if (x == '-') { a = a - b; }
		else if (x == '*') { a = a * b; }
		else if (x == '/') { a = int(a / b); }
		cin >> x;
	}
	cout << a << endl;
}