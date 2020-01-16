#include <iostream>
#include <algorithm>
#include <utility>
#include <list>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	if (a.first != b.first) { return a.first < b.first; }
	else {
		return a.first > b.first;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	list<pair<int, string>> ghldnjs;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		pair<int, string> p(age, name);
		ghldnjs.push_back(p);
	}
	stable_sort(ghldnjs.begin(), ghldnjs.end(), compare);
	list<pair<int, string>>::iterator ghldnjsemf;
	for (ghldnjsemf = ghldnjs.begin(); ghldnjsemf != ghldnjs.end(); ghldnjsemf++) {
		cout << ghldnjsemf->first << " " << ghldnjsemf->second << "\n";
	}
}