#include <iostream>
using namespace std;

int main() {
	int e, f, c;
	cin >> e >> f >> c;
	int number = e + f; //�󺴰���
	int eat_number = 0; //��������
	while (number > c - 1) {
		eat_number = number / c + eat_number;
		number = number % c + number / c;
	}
	cout << eat_number << endl;
}