#include <stdio.h>

int main() {
	int arr[31] = { 0 };
	arr[0] = 1;
	int n;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		arr[n] = 1;
	}
	int a;
	for (int i = 0; i < 31; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i);
		}
	}
}