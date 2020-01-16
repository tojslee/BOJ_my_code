#include <iostream>
using namespace std;
float cal(float a, float b, float c, float d, float e) {
	return 350.34*a + 230.90*b + 190.55*c + 125.30*d + 180.90*e;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		float a, b, c, d, e;
		scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
		printf("$%.2f\n", cal(a, b, c, d, e));
	}
}