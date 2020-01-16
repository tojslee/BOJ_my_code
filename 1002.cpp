#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) { cout << -1 << endl; }
			else { cout << 0 << endl; }
		}
		else {
			int dis = sqrt(pow((x1 - x2) , 2) + pow((y1 - y2), 2));
			if (dis > r1 + r2) { cout << 0 << endl; }
			else if (dis < r1 + r2) { cout << 2 << endl; }
			else { cout << 1 << endl; }
		}
	}
}