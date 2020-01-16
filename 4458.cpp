#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[30];
	int n;
	scanf("%d", &n);
	int diff = 'a' - 'A';

	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		if ('a' <= arr[0] && 'z' >= arr[0]) {
			arr[0] += diff;
			for (int i = 0; i < strlen(arr); i++) { printf("%c", arr[i]); }
		}
		else{ printf("%s\n", arr); }	
	}
}