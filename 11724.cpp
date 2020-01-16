#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class graph {
private:
	map<int, vector<int>> gra;
	int n;
public:
	graph(int n);
	void addEdge(int from, int to);
	void BFS(int from, vector<bool> &visited);
	int BFS();
};

graph::graph(int n) {
	vector<int> au;
	for (int i = 0; i <= n; i++) {
		gra[i] = au;
	}
	this->n = n;
}

void graph::addEdge(int from, int to) {
	gra[from].push_back(to);
	gra[to].push_back(from);
}

void graph::BFS(int from, vector<bool> &visited) {
	queue<int> aux;
	aux.push(from);
	while (!aux.empty()) {
		int th = aux.front();
		for (vector<int>::iterator it = gra[th].begin(); it != gra[th].end(); it++) {
			if (visited[*it] == false) {
				visited[*it] = true;
				aux.push(*it);
			}
		}
		aux.pop();
	}
}

int graph::BFS() {
	vector<bool> visited;
	for (int i = 0; i < n + 1; i++) {
		visited.push_back(false);
	}
	bool checker = true;
	int ccomponent = 0;

	while (checker) {
		checker = false;
		for (int i = 1; i < n + 1; i++) {
			if (visited[i] == false) {
				this->BFS(i, visited);
				checker = true;
				ccomponent++;
				break;
			}
		}
	}
	return ccomponent;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	graph myGraph(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		myGraph.addEdge(a, b);
	}

	cout << myGraph.BFS();
}