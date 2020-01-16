#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int end = 2 * n - 1;
	for (int i = n; i >= 0; i--) {
		for (int j = 0; j < (end - 2 * i + 1) / 2; j++) { printf(" "); }
		for (int j = 0; j < 2 * i - 1; j++) { printf("*"); }
		printf("\n");
	}
}