#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) { printf("*"); }
		for (int j = 0; j < 2 * n - 2 * i; j++) { printf(" "); }
		for (int j = 0; j < i; j++) { printf("*"); }
		printf("\n");
	}
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j < i; j++) { printf("*"); }
		for (int j = 0; j < 2 * n - 2 * i; j++) { printf(" "); }
		for (int j = 0; j < i; j++) { printf("*"); }
		printf("\n");
	}
}