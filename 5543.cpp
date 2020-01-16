#include <iostream>
using namespace std;
int main() {
	int a[3];
	int x, y;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	cin >> x;
	cin >> y;
	int min = a[0];
	for (int i = 1; i < 3; i++) {
		if (a[i] < min) min = a[i];
	}
	int min_x = (x > y) ? y : x;
	cout << min + min_x - 50 << endl;
}