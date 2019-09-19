#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <string>
#include <queue>
using namespace std;

class graph {
private:
	map<pair<int, int>, vector<pair<int, int>>> gra;
	int n;
	int rkfh, tpfh;
public:
	graph(int rkfh, int tpfh, vector<vector<int>> a);
	vector<int> aDFS();
	vector<int> DFS(pair<int, int> p, vector<int>& numbers);
	void doDFS(pair<int, int> p, int& apt, map<pair<int, int>, int>& visited);
	int BFS(pair<int, int> p);
};

graph::graph(int rkfh, int tpfh, vector<vector<int>> a) {
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

int graph::BFS(pair<int, int> p) {
	map<pair<int, int>, pair<bool, int>> visited;
	pair<int, int> end(tpfh - 1, rkfh - 1);
	int length = 1;
	for (int i = 0; i < tpfh; i++) {
		for (int j = 0; j < rkfh; j++) {
			pair<int, int> as(i, j);
			visited[as].first = false;
		}
	}
	queue<pair<int, int>> aux;
	visited[p].first = true;
	visited[p].second = 1;
	aux.push(p);
	while (!aux.empty()) {
		pair<int, int> now = aux.front();
		for (vector<pair<int, int>>::iterator it = gra[now].begin(); it != gra[now].end(); it++) {
			if (visited[*it].first == false) {
				visited[*it].first = true;
				visited[*it].second = visited[now].second + 1;
				aux.push(*it);
				if (*it == end) {
					return visited[*it].second;
				}
			}
		}
		aux.pop();
	}
	return visited[p].second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<int> ma11(m);
	vector<vector<int>> ma(n, ma11);
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			ma[i][j] = s[j] - '0';
		}
	}
	graph myGraph(m, n, ma);
	pair<int, int> p(0, 0);
	cout << myGraph.BFS(p);
}