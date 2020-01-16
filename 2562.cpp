#include <stdio.h>

int main() {
	int a;
	int b = 1;
	scanf("%d", &a);
	int max = a;
	for (int i = 2; i < 10; i++) {
		scanf("%d", &a);
		if (max < a) {
			max = a;
			b = i;
		}
	}
	printf("%d\n", max);
	printf("%d\n", b);
}