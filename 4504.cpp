#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a;
	scanf("%d", &a);
	while (a != 0) {
		if (a % n == 0) {
			printf("%d is a multiple of %d.\n", a, n);
		}
		else {
			printf("%d is NOT a multiple of %d.\n", a, n);
		}
		scanf("%d", &a);
	}
}