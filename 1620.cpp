#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	map<string, int> sttoi;
	map<int, string> itost;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		sttoi[s] = i + 1;
		itost[i + 1] = s;
	}
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (atoi(s.c_str())) {
			cout << itost[atoi(s.c_str())] << "\n";
		}
		else { cout << sttoi[s] << "\n"; }
	}
}