#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n, k;
	cin >> n;
	cin >> k;

	for (int i = 0; i < n; i++) {
		v.push_back(i + 1);
	} // vector���ο� 1 2 3 ... n�� �������

	vector<int>::iterator i = v.begin();
	/*for (i = v.begin(); i != v.end(); i++) {
		cout << *i << endl;
	}*/

	int counter = 0;
	while (counter != n) {

		counter++;
	}
}