#include <iostream>
using namespace std;
int main() {
	int arr[8];
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	int asc = 0, des = 0;
	for (int i = 0; i < 8; i++) {
		if (arr[i] == i+1) { asc += 1; }
		if (arr[i] == 8 - i) { des += 1; }
	}
	if (asc == 8) { cout << "ascending" << endl; }
	else if (des == 8) { cout << "descending" << endl; }
	else { cout << "mixed" << endl; }
}