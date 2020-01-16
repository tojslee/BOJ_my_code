#include <stdio.h>

int main() {
	int arr[3];
	scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
	

	while (!(arr[1] == 0 && arr[2] == 0 && arr[0] == 0)) {
		if (arr[1] - arr[0] == arr[2] - arr[1]) {
			printf("AP %d\n", arr[2] + (arr[2] - arr[1]));
		}
		else if (arr[2] / arr[1] == arr[1] / arr[0]) {
			printf("GP %d\n", arr[2] * (arr[2] / arr[1]));
		}
		scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
	}
}