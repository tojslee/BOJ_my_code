#include <iostream>
using namespace std;

int main() {
	char arr[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%c", &arr[i][j]);
		}
	}

	int a = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					if (arr[i][j] == 'F') { a += 1; }
				}
			}
			else {
				if (j % 2 == 1) {
					if (arr[i][j] == 'F') { a += 1; }
				}
			}
		}
	}
	cout << a << endl;
}