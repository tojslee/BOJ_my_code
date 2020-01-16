#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + (n + 1) * i;
	}
	printf("%d\n", sum);
	
}