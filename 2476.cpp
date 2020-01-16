#include <stdio.h>

int main() {
	int n;
	int money=0;
	int a, b, c;
	int p_money;
	int max;
	int arr[3];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &a, &b, &c);
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		if (a == b && b == c) {
			p_money = 10000 + a * 1000;
		}
		else if (a == b && a!=c && b!=c) {
			p_money = 1000 + a * 100;
		}
		else if (a == c && a!=b && b!=c) {
			p_money = 1000 + a * 100;
		}
		else if (b == c && a!=b && a!=c) {
			p_money = 1000 + c * 100;
		}
		else {
			max = a;
			for (int j = 0; j < 3; j++) {
				if (max < arr[j]) {
					max = arr[j];
				}
			}
			p_money = max * 100;
		}
		if (p_money > money) {
			money = p_money;
		}
	}
	printf("%d\n", money);
}