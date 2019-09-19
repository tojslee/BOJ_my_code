#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;

class graph {
private:
	map<pair<int, int>, vector<pair<int, int>>> gra;
	int n;
	int rkfh, tpfh;
public:
	graph(int n, int rkfh, int tpfh, vector<vector<int>> a);
	vector<int> aDFS();
	vector<int> DFS(pair<int, int> p, vector<int>& numbers);
	void doDFS(pair<int, int> p, int& apt, map<pair<int, int>, int>& visited);
};

graph::graph(int n, int rkfh, int tpfh, vector<vector<int>> a) {
	this->n = n;
	this->rkfh = rkfh;
	this->tpfh = tpfh;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[i].size(); j++) {
			pair<int, int> p(i, j);
			vector<pair<int, int>> asd;
			this->gra[p] = asd;
			if (a[i][j]) {
				this->gra[p].push_back(p);
				if (i != 0 && a[i - 1][j] == 1) {
					pair<int, int> pa(i - 1, j);
					this->gra[p].push_back(pa);
				}
				if (i != a.size() - 1 && a[i + 1][j] == 1) {
					pair<int, int> pa(i + 1, j);
					this->gra[p].push_back(pa);
				}
				if (j != 0 && a[i][j - 1] == 1) {
					pair<int, int> pa(i, j - 1);
					this->gra[p].push_back(pa);
				}
				if (j != a[i].size() - 1 && a[i][j + 1] == 1) {
					pair<int, int> pa(i, j + 1);
					this->gra[p].push_back(pa);
				}
			}
		}
	}
}

vector<int> graph::aDFS() {
	vector<int> numbers;
	for (int i = 0; i < rkfh; i++) {
		for (int j = 0; j < tpfh; j++) {
			pair<int, int> ps(i, j);
			if (gra[ps].size()) {
				return this->DFS(ps, numbers);
			}
		}
	}
	return numbers;
}

vector<int> graph::DFS(pair<int, int> p, vector<int>& numbers) {
	map<pair<int, int>, int> visited;
	for (int i = 0; i < rkfh; i++) {
		for (int j = 0; j < tpfh; j++) {
			pair<int, int> pa(i, j);
			if (gra[pa].size()) {
				visited[pa] = 2; // not visited
			}
			else {
				visited[pa] = 0; // not a vertex
			}
		}
	}

	int apt = 1;
	visited[p] = 1;
	vector<pair<int, int>>::iterator it;
	it = gra[p].begin();
	if (gra[p].size() == 1) { apt = 1; } // no linked vertex
	else {
		it++;
		for (it; it != gra[p].end(); it++) {
			if (visited[*it] == 2) {
				visited[*it] = 1;
				apt++;
				doDFS(*it, apt, visited);
			}
		}
	}

	numbers.push_back(apt);

	for (int i = 0; i < rkfh; i++) {
		for (int j = 0; j < tpfh; j++) {
			pair<int, int> ps(i, j);
			if (gra[ps].size()) {
				if (visited[ps] != 1) {
					apt = 1;
					visited[ps] = 1;
					this->doDFS(ps, apt, visited);
					numbers.push_back(apt);
				} // if it is not visited
			}
		}
	}

	return numbers;
}

void graph::doDFS(pair<int, int> p, int& apt, map<pair<int, int>, int>& visited) {
	vector<pair<int, int>>::iterator it;
	it = gra[p].begin();
	if (gra[p].size() == 1) { apt = 1; } // no linked vertex
	else {
		it++;
		for (it; it != gra[p].end(); it++) {
			if (visited[*it] == 2) {
				visited[*it] = 1;
				apt++;
				doDFS(*it, apt, visited);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int m, n, a;
		cin >> m >> n >> a;
		vector<int> ma11(n);
		vector<vector<int>> ma(m, ma11);
		for (int j = 0; j < a; j++) {
			int f, s;
			cin >> f >> s;
			ma[f][s] = 1;
		}
		graph myGraph(a, m, n, ma);
		vector<int> res = myGraph.aDFS();
		cout << res.size() << "\n";
	}
}