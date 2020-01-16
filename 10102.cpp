#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	char arr[15];
	scanf("%s", arr);
	int a = 0;
	int b = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 'A') {
			a += 1;
		}
		else {
			b += 1;
		}
	}
	if (a > b) {
		printf("A\n");
	}
	else if (a < b) {
		printf("B\n");
	}
	else {
		printf("Tie\n");
	}
}