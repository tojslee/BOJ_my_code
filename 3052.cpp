#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;
	int a;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		s.insert(a % 42);
	}

	cout << s.size() << endl;
}