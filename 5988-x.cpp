#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i = 0;
	while(i != n) {
		int k;
		scanf("%d", &k);
		if (k % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
		i = i + 1;
	}
}