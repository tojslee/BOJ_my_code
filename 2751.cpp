#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void do_merge(vector<int>::iterator vi, vector<int>::iterator auxi, int from, int to) {
	if (from >= to) { return; }
	int mid = (from + to) / 2;
	do_merge(vi, auxi, from, mid);
	do_merge(vi, auxi, mid + 1, to);

	int a = from;
	int b = mid + 1;
	int i = from;
	while (a <= mid && b <= to) {
		if (*(vi + a) < *(vi + b)) { *(auxi + i) = *(vi + a); i++; a++; }
		else { *(auxi + i) = *(vi + b); b++; i++; }
	}

	if (a > mid) {
		for (int j = i; j < to + 1; j++) {
			*(auxi + j) = *(vi + b); b++;
		}
	}
	else if (b > to) {
		for (int j = i; j < to + 1; j++) {
			*(auxi + j) = *(vi + a); a++;
		}
	}

	for (int i = from; i < to + 1; i++) {
		*(vi + i) = *(auxi + i);
	}
}

vector<int> merge_sort(vector<int>v) {
	vector<int> aux(v.size(), 0);
	vector<int>::iterator auxi = aux.begin();
	vector<int>::iterator vi = v.begin();
	do_merge(vi, auxi, 0, v.size() - 1);
	return v;
}

int main() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	vector<int> aux;
	v = merge_sort(v);

	for (int i = 0; i < n; i++) {
		cout << v[i] << "\n";
	}
}