#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int arr1[7];
	for (int i = 0; i < n; i++) {
		int sum = 0;
		int min = 0;
		for (int j = 0; j < 7; j++) {
			scanf("%d", &arr1[j]);
		}
		for (int j = 0; j < 7; j++) {
			if (arr1[j] % 2 == 0) {
				min = arr1[j];
				break;
			}
		}
		for (int j = 0; j < 7; j++) {
			if (arr1[j] % 2 == 0) {
				if (arr1[j] < min) { min = arr1[j]; }
				sum += arr1[j];
			}
		}
		printf("%d %d\n", sum, min);
	}
}