#include <iostream>
using namespace std;

int main() {
	char Adrian[] = { 'A', 'B', 'C' };
	char Bruno[] = { 'B', 'A', 'B', 'C' };
	char Goran[] = { 'C', 'C', 'A', 'A', 'B', 'B' };

	int q_number;
	cin >> q_number;
	char q_answer[100];
	cin >> q_answer;

	int score_Arr[3] = { 0 };

	for (int i = 0; i < q_number; i++) {
		if (q_answer[i] == Adrian[i % 3]) { score_Arr[0] += 1; }
		if (q_answer[i] == Bruno[i % 4]) { score_Arr[1] += 1; }
		if (q_answer[i] == Goran[i % 6]) { score_Arr[2] += 1; }
	}
	int max = score_Arr[0];
	for (int i = 0; i < 3; i++) {
		if (max < score_Arr[i]) { max = score_Arr[i]; }
	}
	cout << max << endl;
	if (max == score_Arr[0]) { cout << "Adrian" << endl; }
	if (max == score_Arr[1]) { cout << "Bruno" << endl; }
	if (max == score_Arr[2]) { cout << "Goran" << endl; }
}