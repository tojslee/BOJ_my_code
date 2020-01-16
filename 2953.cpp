#include <stdio.h>

int main() {
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		arr[i][4] = 0;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][4] += arr[i][j];
		}
	}

	int max=0;
	int num=0;
	for (int i = 0; i < 5; i++) {
		if (max < arr[i][4]) {
			max = arr[i][4];
			num = i;
		}
	}
	printf("%d %d\n", num+1, max);
}