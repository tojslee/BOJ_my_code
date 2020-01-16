#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char line[100];
	cin >> line;
	for (int i = 0; i < strlen(line); i++) {
		if (i % 10 == 0 && i != 0) { cout << endl; }
		cout << line[i];
	}
	cout << endl;
}