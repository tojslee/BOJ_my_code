#include <iostream>
using namespace std;

int main() {
	int e, f, c;
	cin >> e >> f >> c;
	int number = e + f; //ºóº´°³¼ö
	int eat_number = 0; //¸ÔÀº°³¼ö
	while (number > c - 1) {
		eat_number = number / c + eat_number;
		number = number % c + number / c;
	}
	cout << eat_number << endl;
}