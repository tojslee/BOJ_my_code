#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	int sum = 0;
	for (int i = sqrt(a) + 1; i < sqrt(b) + 1; i++) {
		sum += i * i;
	}
	cout << sum << endl;
	cout << (int(sqrt(a) + 1)*int(sqrt(a) + 1)) << endl;
}