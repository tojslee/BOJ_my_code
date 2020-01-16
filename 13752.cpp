#include <iostream>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	int test_arr[100];
	for (int i = 0; i < test_case; i++) {
		cin >> test_arr[i];
	}
	for (int i = 0; i < test_case; i++) {
		for (int j = 0; j < test_arr[i]; j++) { cout << "="; }
		cout << endl;
	}
}