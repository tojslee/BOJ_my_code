#include <iostream>
using namespace std;

void pair_getter(int sum);

int main() {
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int n;
		cin >> n;
		cout << "Pairs for " << n << ": ";
		pair_getter(n);
	}
}

void pair_getter(int sum) {
	int first_pair[6];
	int second_pair[6];
	for (int j = 1; j <= sum / 2; j++) {
		if (j != sum - j) {
			first_pair[j - 1] = j;
			second_pair[j - 1] = sum - j;
		}
	}
	if (sum != 1 && sum != 2) {
		if (sum % 2 == 1) {
			for (int j = 0; j < sum / 2 - 1; j++) {
				cout << first_pair[j] << " " << second_pair[j] << ", ";
			}
			cout << first_pair[sum / 2 - 1] << " " << second_pair[sum / 2 - 1] << endl;
		}
		else {
			for (int j = 0; j < sum / 2 - 2; j++) {
				cout << first_pair[j] << " " << second_pair[j] << ", ";
			}
			cout << first_pair[sum / 2 - 2] << " " << second_pair[sum / 2 - 2] << endl;
		}
	}
	else { cout << endl; }
}