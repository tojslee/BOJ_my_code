#include <stdio.h>

void checker(char a, float *b) {
	if (a == '+') {
		*b = *b + 0.3;
	}
	else if (a == '-') {
		*b = *b - 0.3;
	}
}

int main() {
	char arr[3];
	float score;

	scanf("%s", arr);
	if (arr[0] == 'A') {
		score = 4.0;
		checker(arr[1], &score);
	}
	else if (arr[0] == 'B') {
		score = 3.0;
		checker(arr[1], &score);
	}
	else if (arr[0] == 'C') {
		score = 2.0;
		checker(arr[1], &score);
	}
	else if (arr[0] == 'D') {
		score = 1.0;
		checker(arr[1], &score);
	}
	else if (arr[0] == 'F') {
		score = 0.0;
	}
	printf("%.1f\n", score);
}