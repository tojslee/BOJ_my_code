#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class graph {
private:
	int n; // 정점의 개수
	vector<vector<int>> a;
public:
	graph(int n) {
		this->n = n;
		for (int i = 0; i < n + 1; i++) {
			vector<int> element;
			a.push_back(element);
		}
	}

	void insertEdge(int from, int to) {
		a[from].push_back(to);
		a[to].push_back(from);
		sort(a[from].begin(), a[from].end());
		sort(a[to].begin(), a[to].end());
	}

	void DFS(int from) {
		bool* visited = new bool[this->n + 1];
		for (int i = 0; i < n + 1; i++) { visited[i] = false; }

		cout << from << " ";
		visited[from] = true;
		for (vector<int>::iterator i = a[from].begin(); i != a[from].end(); i++) {
			if (!visited[*i]) {
				visited[*i] = true;
				cout << *i << " ";
				doDFS(*i, visited);
			}
		}
	}

	void doDFS(int from, bool* visited) {
		for (vector<int>::iterator i = a[from].begin(); i != a[from].end(); i++) {
			if (!visited[*i]) {
				visited[*i] = true;
				cout << *i << " ";
				doDFS(*i, visited);
			}
		}
	}

	void BFS(int from) {
		queue<int> aux;
		bool* visited = new bool[this->n + 1];
		for (int i = 0; i < n + 1; i++) { visited[i] = false; }
		cout << from << " ";
		visited[from] = true;
		aux.push(from);
		while (!aux.empty()) {
			int f = aux.front();
			for (vector<int>::iterator i = a[f].begin(); i != a[f].end(); i++) {
				if (!visited[*i]) { cout << *i << " "; visited[*i] = true; aux.push(*i); }
			}
			aux.pop();
		}
	}

};

int main() {
	int n, m, v;
	cin >> n >> m >> v;
	graph g(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g.insertEdge(a, b);
	}
	g.DFS(v);
	cout << "\n";
	g.BFS(v);
}