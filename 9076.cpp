#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int score_arr[5] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> score_arr[j];
		}
		int max = 0;
		int min = score_arr[0];
		for (int j = 0; j < 5; j++) {
			if (max < score_arr[j]) { max = score_arr[j]; }
			if (min > score_arr[j]) { min = score_arr[j]; }
		}
		int sum = 0;
		int keeper = max;
		for (int j = 0; j < 5; j++) {
			if (max == score_arr[j]) { score_arr[j] = 0; }
			if (min == score_arr[j]) { score_arr[j] = 0; }
		}
		max = 0;
		min = keeper;
		for (int j = 0; j < 5; j++) {
			if (max < score_arr[j]) { max = score_arr[j]; }
			if (min > score_arr[j] && score_arr[j]!=0) { min = score_arr[j]; }
		}
		if (max - min >= 4) { cout << "KIN" << endl; }
		else {
			for (int j = 0; j < 5; j++) { sum += score_arr[j]; }
			cout << sum << endl;		
		}
	}
}