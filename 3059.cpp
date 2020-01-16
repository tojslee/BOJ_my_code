#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for (int j = 0; j < n; j++) {
		char arr[1000];
		int sum = 0;
		char alphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
		scanf("%s", arr);
		for (int i = 0; i < strlen(arr); i++) {
			for (int k = 0; k < 26; k++) {
				if (arr[i] == alphabet[k]) { alphabet[k] = '0'; }
			}
		}
		for (int i = 0; i < 26; i++) {
			if (alphabet[i] != '0') {
				sum += (int)(alphabet[i]) + 65;
			}
		}
		printf("%d\n", sum);
	}
}