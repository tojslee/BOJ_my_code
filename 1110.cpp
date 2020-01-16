#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	const int tester = n;
	int second = n % 10 + (n / 10) % 10;
	n = (n % 10) * 10 + second % 10;
	int count = 1;
	while (n != tester) {
		second = n % 10 + (n / 10) % 10;
		n = (n % 10) * 10 + second % 10;
		count++;
	}
	cout << count << endl;
}