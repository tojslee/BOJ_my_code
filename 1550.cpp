#include <stdio.h>
#include <string.h>

int main() {
	char arr[6];
	scanf("%s", &arr);

	int le = strlen(arr);
	int res = 0;

	for (int i = 0; i < le; i++) {
		if (arr[i] == 'A') {
			arr[i] = 10;
		}
		else if (arr[i] == 'B') {
			arr[i] = 11;
		}
		else if (arr[i] == 'C') {
			arr[i] = 12;
		}
		else if (arr[i] == 'D') {
			arr[i] = 13;
		}
		else if (arr[i] == 'E') {
			arr[i] = 14;
		}
		else if (arr[i] = 'F') {
			arr[i] = 15;
		}
		res = res + 16^(le-i-1)*int(arr[i]); //°ÅµìÁ¦°ö ¿¬»ê
	}
	printf("%d\n", res);
}