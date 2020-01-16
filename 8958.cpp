#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char score[80];
		cin >> score;
		int conti = 0;
		int res_score = 0;
		for (int j = 0; j < strlen(score); j++) {
			if (score[j] == 'O') {
				conti++;
				res_score += conti;
			}
			else {
				conti = 0;
			}
		}
		cout << res_score << endl;
	}
}