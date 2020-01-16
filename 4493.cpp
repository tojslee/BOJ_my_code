#include <stdio.h>

int First = 0, Second = 0;

int Vers(char a, char b) {
	if (a == 'R') {
		if (b == 'S') {
			return First += 1;
		}
		else if (b == 'P') {
			return Second += 1;
		}
	}
	else if (a == 'S') {
		if (b == 'R') {
			return Second += 1;
		}
		else if (b == 'P') {
			return First += 1;
		}
	}
	else if (a == 'P') {
		if (b == 'S') {
			return Second += 1;
		}
		else if (b == 'R') {
			return First += 1;
		}
	}

}

int main() {
	int n;
	scanf("%d", &n);
	int a;
	int x, y;

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		for (int j = 0; j < a; j++) {
			scanf("%s%s", &x, &y);
			Vers(x, y);
		}
		if (First > Second) {
			printf("Player 1\n");
		}
		else if (First == Second) {
			printf("TIE\n");
		}
		else {
			printf("Player 2\n");
		}
		First = 0;
		Second = 0;
	}
}