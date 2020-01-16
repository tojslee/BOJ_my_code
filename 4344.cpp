#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int number;
		cin >> number;
		int arr[1000];
		for (int j = 0; j < number; j++) {
			cin >> arr[j];
		}
		float sum = 0;
		for (int j = 0; j < number; j++) {
			sum += (double)arr[j];
		}
		float student_number = 0;
		for (int j = 0; j < number; j++) {
			if (arr[j] > (sum / number)) { student_number++; }
		}
		float res = (double)student_number / (double)number * (double)100;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		cout << res << "%" << endl;
	}
}