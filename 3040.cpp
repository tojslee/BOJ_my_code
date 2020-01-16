#include <iostream>

using namespace std;

int main() {
	int arr[9];
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		sum += arr[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = i; j < 9; j++) {
			if (arr[i] + arr[j] == sum - 100) {
				arr[i] = 0;
				arr[j] = 0;
				break;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (arr[i] != 0) {
			cout << arr[i] << endl;
		}
	}
}