#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> v;
	int s;
	cin >> s;
	int a = 0;
	while (s != 0) {
		v.push_back(s % 10);
		s = s / 10;
		a++;
	}
	sort(v.begin(), v.begin() + v.size());
	reverse(v.begin(), v.begin() + v.size());
	for (int i = 0; i < a; i++) {
		cout << v[i];
	}
	cout << endl;
}