#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a <= 99) { cout << a << endl; }
	else if (a == 1000) { cout << 144 << endl; }
	else {
		int b = 99;
		b = b + 5 * (a / 100 - 1);
		int c = a / 100;
		int d = (a % 100) / 10;
		int e = a % 10;
		if (c % 2 == 0) {
			// 짝수이면
			if (c / 2 <= (a % 100) / 10 && (a % 100) / 10 <= c / 2 + 4) {
				b += (a % 100) / 10 - c / 2;
				// 이제 일의 자리
				if (c - d >= d - e) { b += 1; }
			}
			else if ((a % 100) / 10 > c / 2 + 4) {
				b += 5;
			}
		}
		else {
			if (c / 2 + 1 <= d && d <= c / 2 + 5) {
				b += d - c / 2 - 1;
				if (c - d >= d - e) { b += 1; }
			}
			else if (d > c / 2 + 5) { b += 5; }
		}
		cout << b << endl;
	}
}