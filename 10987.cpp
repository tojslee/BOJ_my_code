#include <stdio.h>
#include <string.h>

int main() {
	char arr[100];
	scanf("%s", arr);
	int counter = 0;

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
			counter += 1;
		}
	}
	printf("%d\n", counter);
}