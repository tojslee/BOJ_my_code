#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cin >> a >> b >> c;
	int counter = 1;
	while (a != 0) {
		if (a == -1) {
			a = sqrt(c * c - b * b);
			cout << "Triangle #" << counter << endl;
			if (a + b > c) { cout << "a = " << a << endl; }
			else { cout << "Impossible." << endl; }
		}
		else if (b == -1) {
			b = sqrt(c * c - a * a);
			cout << "Triangle #" << counter << endl;
			if (a + b > c) { cout << "b = " << b << endl; }
			else { cout << "Impossible." << endl; }
		}
		else {
			c = sqrt(a * a + b * b);
			cout << "Triangle #" << counter << endl;
			if (a + b > c) { cout << "c = " << c << endl; }
			else { cout << "Impossible." << endl; }
		}
		counter++;
		cout << endl;
		cin >> a >> b >> c;
	}
}