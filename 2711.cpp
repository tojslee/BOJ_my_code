#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	int place;
	char arr[80];
	for (int i = 0; i < testcase; i++) {
		cin >> place;
		cin >> arr;
		for (int i = 0; i < strlen(arr); i++) {
			if (i != place - 1) { cout << arr[i]; }
		}
		cout<<endl;
	}
}