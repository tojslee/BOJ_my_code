#include <iostream>
using namespace std;

int main() {
	long long int a;
	long long int b;
	scanf("%d%d", &a, &b);
	long long int x, y;
	x = (a > b) ? a : b;
	y = (a > b) ? b : a;
	/*
	for (long long int i = a; i <= b; i++) {
		res += i;
	}*/
	cout << (x+y)*(x-y+1)/2 << endl;
}