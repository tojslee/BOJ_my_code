#include <iostream>
#include <string>
using namespace std;

void month_checker(int *month, int*day);

int main() {
	int month, day;
	cin >> month >> day;
	int x = 1, y = 1;
	string arr[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int checker = 0; // MAX = 6
	while (!(x == month && y == day)) {
		y++;
		if (checker == 6) { checker = 0; }
		else { checker++; }
		month_checker(&x, &y);
	}
	cout << arr[checker] << endl;
}

void month_checker(int *month, int *day) {
	if (*day > 28) {
		if (*month == 2) {
			*day = 1;
			*month += 1;
		}
		else if (*month == 1 || *month == 3 || *month == 5 || *month == 7 || *month == 8 || *month == 10 || *month == 12) {
			if (*day > 31) {
				*day = 1;
				*month += 1;
			}
		}
		else {
			if (*day > 30) {
				*day = 1;
				*month += 1;
			}
		}
	}
}