#include <iostream>
using namespace std;

int main() {
	int arr[7];
	int hap=0;
	int min;


	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
	}

	bool flag = true;
	for (int i = 0; i < 7; i++) {
		if (arr[i] % 2 != 0) {
			flag = false;
		}
	}

	if (flag == false) {
		for (int i = 0; i < 7; i++) {
			if (arr[i] % 2 != 0) {
				hap += arr[i];
			}
		}

		int k;
		for (int i = 0; i < 7; i++) {
			if (arr[i] % 2 != 0) {
				min = arr[i];
				k = i;
				break;
			}
		}

		for (int i = k; i < 7; i++) {
			if (min > arr[i] && arr[i] % 2 != 0) {
				min = arr[i];
			}
		}
		cout << hap << endl;
		cout << min << endl;
	}
	else {
		cout << -1 << endl;
	}
}