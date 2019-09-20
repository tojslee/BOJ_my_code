#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m, k;
	vector<long long int> v;
	scanf_s("%d %d %d", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		long long int a;
		scanf_s("%lld", &a);
		v.push_back(a);
	}

	for (int i = 0; i < k; ) {
		long long int a, b, c;
		scanf_s("%lld %lld %lld", &a, &b, &c);
		if (a == 1) {
			vector<long long int>::iterator k = v.begin() + b - 1;
			*k = c;
		}
		else if (a == 2) {
			long long int sum = 0;
			vector<long long int>::iterator k = v.begin() + b - 1;
			for (int j = b; j < c + 1; j++) {
				sum += *k;
				k++;
			}
			cout << sum << "\n";
			i++;
		}
	}
}